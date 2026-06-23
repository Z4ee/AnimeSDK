#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyRepeatingOrderEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGBoundsGroup_DistributionModeEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGBoundsGroup_RotationModeEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGWeightedItem.h"
#include "unitysdk/FluffyUnderware/DevTools/FloatRegion.h"
#include "unitysdk/FluffyUnderware/DevTools/IntRegion.h"
#include "unitysdk/FluffyUnderware/DevTools/RegionOptions_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Generator { class CGBoundsGroupItem; }
namespace FluffyUnderware::DevTools { template <typename T> class WeightedRandom_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_CONVERTOBSOLETEDATA_OFFSET UNITYSDK_OFFSET(0x1E0243C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_FILLITEMBAG_OFFSET UNITYSDK_OFFSET(0x1E023FE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_CROSSBASE_OFFSET UNITYSDK_OFFSET(0x1E023A10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_FIRSTREPEATING_OFFSET UNITYSDK_OFFSET(0x1E023CE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_IGNOREMODULECROSSBASE_OFFSET UNITYSDK_OFFSET(0x1E023A40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1E023D40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1E023CD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_KEEPTOGETHER_OFFSET UNITYSDK_OFFSET(0x1E023940)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_LASTREPEATING_OFFSET UNITYSDK_OFFSET(0x1E023D60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E023920)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_POSITIONRANGEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1E024350)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_RANDOMIZEITEMS_OFFSET UNITYSDK_OFFSET(0x1E0239C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_RELATIVETRANSLATION_OFFSET UNITYSDK_OFFSET(0x1E023C20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_REPEATINGGROUPSOPTIONS_OFFSET UNITYSDK_OFFSET(0x1E0242C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_REPEATINGITEMS_OFFSET UNITYSDK_OFFSET(0x1E0239E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ROTATIONMODE_OFFSET UNITYSDK_OFFSET(0x1E023A60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ROTATIONX_OFFSET UNITYSDK_OFFSET(0x1E023A80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ROTATIONY_OFFSET UNITYSDK_OFFSET(0x1E023AC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ROTATIONZ_OFFSET UNITYSDK_OFFSET(0x1E023B00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1E023B60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1E023BA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SCALEZ_OFFSET UNITYSDK_OFFSET(0x1E023BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SPACEAFTER_OFFSET UNITYSDK_OFFSET(0x1E023990)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SPACEBEFORE_OFFSET UNITYSDK_OFFSET(0x1E023960)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_TRANSLATIONX_OFFSET UNITYSDK_OFFSET(0x1E023C40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_TRANSLATIONY_OFFSET UNITYSDK_OFFSET(0x1E023C70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_TRANSLATIONZ_OFFSET UNITYSDK_OFFSET(0x1E023CA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_UNIFORMSCALING_OFFSET UNITYSDK_OFFSET(0x1E023B40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_CROSSBASE_OFFSET UNITYSDK_OFFSET(0x1E023A30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_FIRSTREPEATING_OFFSET UNITYSDK_OFFSET(0x1E023CF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_IGNOREMODULECROSSBASE_OFFSET UNITYSDK_OFFSET(0x1E023A50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_KEEPTOGETHER_OFFSET UNITYSDK_OFFSET(0x1E023950)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_LASTREPEATING_OFFSET UNITYSDK_OFFSET(0x1E023D70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E023930)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_RANDOMIZEITEMS_OFFSET UNITYSDK_OFFSET(0x1E0239D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_RELATIVETRANSLATION_OFFSET UNITYSDK_OFFSET(0x1E023C30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_REPEATINGITEMS_OFFSET UNITYSDK_OFFSET(0x1E023A00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_ROTATIONMODE_OFFSET UNITYSDK_OFFSET(0x1E023A70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_ROTATIONX_OFFSET UNITYSDK_OFFSET(0x1E023AA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_ROTATIONY_OFFSET UNITYSDK_OFFSET(0x1E023AE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_ROTATIONZ_OFFSET UNITYSDK_OFFSET(0x1E023B20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1E023B80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1E023BC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SCALEZ_OFFSET UNITYSDK_OFFSET(0x1E023C00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SPACEAFTER_OFFSET UNITYSDK_OFFSET(0x1E0239B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SPACEBEFORE_OFFSET UNITYSDK_OFFSET(0x1E023980)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_TRANSLATIONX_OFFSET UNITYSDK_OFFSET(0x1E023C60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_TRANSLATIONY_OFFSET UNITYSDK_OFFSET(0x1E023C90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_TRANSLATIONZ_OFFSET UNITYSDK_OFFSET(0x1E023CC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_UNIFORMSCALING_OFFSET UNITYSDK_OFFSET(0x1E023B50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E023DC0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGBoundsGroup_TypeDefinitionIndex = 38955;

	class CGBoundsGroup : public ::FluffyUnderware::Curvy::Generator::CGWeightedItem
	{
	public:
		::System::String* m_Name; // 0x18
		::System::Boolean m_KeepTogether; // 0x20
		::FluffyUnderware::DevTools::FloatRegion m_SpaceBefore; // 0x24
		::FluffyUnderware::DevTools::FloatRegion m_SpaceAfter; // 0x30
		::FluffyUnderware::DevTools::FloatRegion m_CrossBase; // 0x3C
		::System::Boolean m_IgnoreModuleCrossBase; // 0x48
		::System::Boolean m_RandomizeItems; // 0x49
		::FluffyUnderware::DevTools::IntRegion m_RepeatingItems; // 0x4C
		::System::Boolean m_RelativeTranslation; // 0x58
		::FluffyUnderware::DevTools::FloatRegion m_TranslationX; // 0x5C
		::FluffyUnderware::DevTools::FloatRegion m_TranslationY; // 0x68
		::FluffyUnderware::DevTools::FloatRegion m_TranslationZ; // 0x74
		::FluffyUnderware::Curvy::Generator::CGBoundsGroup_RotationModeEnum m_RotationMode; // 0x80
		::FluffyUnderware::DevTools::FloatRegion m_RotationX; // 0x84
		::FluffyUnderware::DevTools::FloatRegion m_RotationY; // 0x90
		::FluffyUnderware::DevTools::FloatRegion m_RotationZ; // 0x9C
		::System::Boolean m_UniformScaling; // 0xA8
		::FluffyUnderware::DevTools::FloatRegion m_ScaleX; // 0xAC
		::FluffyUnderware::DevTools::FloatRegion m_ScaleY; // 0xB8
		::FluffyUnderware::DevTools::FloatRegion m_ScaleZ; // 0xC4
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBoundsGroupItem*>* m_Items; // 0xD0
		::FluffyUnderware::Curvy::Generator::CGBoundsGroup_DistributionModeEnum m_DistributionMode; // 0xD8
		::FluffyUnderware::DevTools::FloatRegion m_PositionOffset; // 0xDC
		::FluffyUnderware::DevTools::FloatRegion m_Height; // 0xE8
		::FluffyUnderware::Curvy::CurvyRepeatingOrderEnum m_RepeatingOrder; // 0xF4
		::UnityEngine::Vector3 m_RotationOffset; // 0xF8
		::UnityEngine::Vector3 m_RotationScatter; // 0x104

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_KeepTogether()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_KEEPTOGETHER_OFFSET))(this);
		}

		::System::Void set_KeepTogether(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_KEEPTOGETHER_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_SpaceBefore()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SPACEBEFORE_OFFSET))(this);
		}

		::System::Void set_SpaceBefore(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SPACEBEFORE_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_SpaceAfter()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SPACEAFTER_OFFSET))(this);
		}

		::System::Void set_SpaceAfter(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SPACEAFTER_OFFSET))(this, value);
		}

		::System::Boolean get_RandomizeItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_RANDOMIZEITEMS_OFFSET))(this);
		}

		::System::Void set_RandomizeItems(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_RANDOMIZEITEMS_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::IntRegion get_RepeatingItems()
		{
			return ((::FluffyUnderware::DevTools::IntRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_REPEATINGITEMS_OFFSET))(this);
		}

		::System::Void set_RepeatingItems(::FluffyUnderware::DevTools::IntRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::IntRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_REPEATINGITEMS_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_CrossBase()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_CROSSBASE_OFFSET))(this);
		}

		::System::Void set_CrossBase(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_CROSSBASE_OFFSET))(this, value);
		}

		::System::Boolean get_IgnoreModuleCrossBase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_IGNOREMODULECROSSBASE_OFFSET))(this);
		}

		::System::Void set_IgnoreModuleCrossBase(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_IGNOREMODULECROSSBASE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGBoundsGroup_RotationModeEnum get_RotationMode()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGBoundsGroup_RotationModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ROTATIONMODE_OFFSET))(this);
		}

		::System::Void set_RotationMode(::FluffyUnderware::Curvy::Generator::CGBoundsGroup_RotationModeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGBoundsGroup_RotationModeEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_ROTATIONMODE_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_RotationX()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ROTATIONX_OFFSET))(this);
		}

		::System::Void set_RotationX(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_ROTATIONX_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_RotationY()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ROTATIONY_OFFSET))(this);
		}

		::System::Void set_RotationY(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_ROTATIONY_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_RotationZ()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ROTATIONZ_OFFSET))(this);
		}

		::System::Void set_RotationZ(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_ROTATIONZ_OFFSET))(this, value);
		}

		::System::Boolean get_UniformScaling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_UNIFORMSCALING_OFFSET))(this);
		}

		::System::Void set_UniformScaling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_UNIFORMSCALING_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_ScaleX()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SCALEX_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_ScaleY()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SCALEY_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_ScaleZ()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_SCALEZ_OFFSET))(this);
		}

		::System::Void set_ScaleZ(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_SCALEZ_OFFSET))(this, value);
		}

		::System::Boolean get_RelativeTranslation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_RELATIVETRANSLATION_OFFSET))(this);
		}

		::System::Void set_RelativeTranslation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_RELATIVETRANSLATION_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_TranslationX()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_TRANSLATIONX_OFFSET))(this);
		}

		::System::Void set_TranslationX(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_TRANSLATIONX_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_TranslationY()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_TRANSLATIONY_OFFSET))(this);
		}

		::System::Void set_TranslationY(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_TRANSLATIONY_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::FloatRegion get_TranslationZ()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_TRANSLATIONZ_OFFSET))(this);
		}

		::System::Void set_TranslationZ(::FluffyUnderware::DevTools::FloatRegion value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_TRANSLATIONZ_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBoundsGroupItem*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGBoundsGroupItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ITEMS_OFFSET))(this);
		}

		::System::Int32 get_FirstRepeating()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_FIRSTREPEATING_OFFSET))(this);
		}

		::System::Void set_FirstRepeating(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_FIRSTREPEATING_OFFSET))(this, value);
		}

		::System::Int32 get_LastRepeating()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_LASTREPEATING_OFFSET))(this);
		}

		::System::Void set_LastRepeating(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_SET_LASTREPEATING_OFFSET))(this, value);
		}

		::System::Int32 get_ItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_ITEMCOUNT_OFFSET))(this);
		}

		static ::System::Void FillItemBag(::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>* bag, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGWeightedItem*>* itemsWeights, ::System::Int32 firstItem, ::System::Int32 lastItem)
		{
			return ((::System::Void(*)(::FluffyUnderware::DevTools::WeightedRandom_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGWeightedItem*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_FILLITEMBAG_OFFSET))(bag, itemsWeights, firstItem, lastItem);
		}

		::FluffyUnderware::DevTools::RegionOptions_1<::System::Int32> get_RepeatingGroupsOptions()
		{
			return ((::FluffyUnderware::DevTools::RegionOptions_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_REPEATINGGROUPSOPTIONS_OFFSET))(this);
		}

		::FluffyUnderware::DevTools::RegionOptions_1<::System::Single> get_PositionRangeOptions()
		{
			return ((::FluffyUnderware::DevTools::RegionOptions_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_GET_POSITIONRANGEOPTIONS_OFFSET))(this);
		}

		::System::Void ConvertObsoleteData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUP_CONVERTOBSOLETEDATA_OFFSET))(this);
		}
	};
}
