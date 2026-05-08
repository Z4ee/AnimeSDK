#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class TextureRecorderUnit; }
namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_MATERIALINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C531D90)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C531DD0)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__GETRECOVERPROPERTIES_B__27_0_OFFSET UNITYSDK_OFFSET(0x1C531DE0)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__GETRECOVERPROPERTIES_B__27_1_OFFSET UNITYSDK_OFFSET(0x1C531E00)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__GETRECOVERPROPERTIES_B__27_2_OFFSET UNITYSDK_OFFSET(0x1C531E20)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__GETRECOVERPROPERTIES_B__27_3_OFFSET UNITYSDK_OFFSET(0x1C531E40)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__SETKEYWORDS_B__48_0_OFFSET UNITYSDK_OFFSET(0x1C531E60)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__SETKEYWORDS_B__48_1_OFFSET UNITYSDK_OFFSET(0x1C531E80)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__SETKEYWORDS_B__49_0_OFFSET UNITYSDK_OFFSET(0x1C531EA0)
#define MOLEMOLE_TIMELINE_MATERIALINFO___C__SETKEYWORDS_B__49_1_OFFSET UNITYSDK_OFFSET(0x1C531EF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialInfo___c_TypeDefinitionIndex = 30632;

	class MaterialInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x25050);
		}
		static ::System::Func_2<::MoleMole::Timeline::Vector4RecorderUnit*, ::System::Int32>** StaticGet___9__27_3()
		{
			return (::System::Func_2<::MoleMole::Timeline::Vector4RecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x25058);
		}
		static ::MoleMole::Timeline::MaterialInfo___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::MaterialInfo___c**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x25060);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::Single>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x25068);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Int32>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x25070);
		}
		static ::System::Func_2<::MoleMole::Timeline::TextureRecorderUnit*, ::System::Int32>** StaticGet___9__27_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::TextureRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x25078);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::String*>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x25080);
		}
		static ::System::Func_2<::MoleMole::Timeline::ColorRecorderUnit*, ::System::Int32>** StaticGet___9__27_2()
		{
			return (::System::Func_2<::MoleMole::Timeline::ColorRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x25088);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x25090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRecoverProperties_b__27_0(::MoleMole::Timeline::FloatRecorderUnit* floatValConfig)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__GETRECOVERPROPERTIES_B__27_0_OFFSET))(this, floatValConfig);
		}

		::System::Int32 _GetRecoverProperties_b__27_1(::MoleMole::Timeline::TextureRecorderUnit* floatValConfig)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::TextureRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__GETRECOVERPROPERTIES_B__27_1_OFFSET))(this, floatValConfig);
		}

		::System::Int32 _GetRecoverProperties_b__27_2(::MoleMole::Timeline::ColorRecorderUnit* floatValConfig)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::ColorRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__GETRECOVERPROPERTIES_B__27_2_OFFSET))(this, floatValConfig);
		}

		::System::Int32 _GetRecoverProperties_b__27_3(::MoleMole::Timeline::Vector4RecorderUnit* floatValConfig)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::Vector4RecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__GETRECOVERPROPERTIES_B__27_3_OFFSET))(this, floatValConfig);
		}

		::System::String* _SetKeyWords_b__48_0(::MoleMole::Timeline::FloatRecorderUnit* config)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__SETKEYWORDS_B__48_0_OFFSET))(this, config);
		}

		::System::Single _SetKeyWords_b__48_1(::MoleMole::Timeline::FloatRecorderUnit* config)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__SETKEYWORDS_B__48_1_OFFSET))(this, config);
		}

		::System::String* _SetKeyWords_b__49_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*> keyFrame)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__SETKEYWORDS_B__49_0_OFFSET))(this, keyFrame);
		}

		::System::Single _SetKeyWords_b__49_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*> keyFrame)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO___C__SETKEYWORDS_B__49_1_OFFSET))(this, keyFrame);
		}
	};
}
