#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class FloorStreamingLayerLoadGroupStateEntry; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13637EE0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13637F20)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__ONENABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x13637F30)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorStreamingLayerLoadComponent___c_TypeDefinitionIndex = 79787;

	class FloorStreamingLayerLoadComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FloorStreamingLayerLoadComponent___c_TypeDefinitionIndex)->GetStaticField(0x33C00);
		}
		static ::Foundation::ViewObject::Donjon::FloorStreamingLayerLoadComponent___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::Donjon::FloorStreamingLayerLoadComponent___c**)Il2CppClass::FromTypeDefinitionIndex(FloorStreamingLayerLoadComponent___c_TypeDefinitionIndex)->GetStaticField(0x33C08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnEnable_b__2_0(::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___C__ONENABLE_B__2_0_OFFSET))(this, entry);
		}
	};
}
