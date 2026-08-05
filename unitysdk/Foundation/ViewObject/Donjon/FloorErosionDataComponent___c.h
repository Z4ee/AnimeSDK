#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_21CBD932FB56D3A8.h"
#include "unitysdk/System/Object.h"

class Class_1_30B210AEDB34BA56;
class Class_3_D92ADC48CDFCC09B_3;

#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148276B0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148276F0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__ONENABLE_B__5_0_OFFSET UNITYSDK_OFFSET(0x14827700)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorErosionDataComponent___c_TypeDefinitionIndex = 61865;

	class FloorErosionDataComponent___c : public ::System::Object
	{
	public:
		static ::Foundation::ViewObject::Donjon::FloorErosionDataComponent___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::Donjon::FloorErosionDataComponent___c**)Il2CppClass::FromTypeDefinitionIndex(FloorErosionDataComponent___c_TypeDefinitionIndex)->GetStaticField(0x2F4F0);
		}
		static ::Class_3_D92ADC48CDFCC09B_3** StaticGet___9__5_0()
		{
			return (::Class_3_D92ADC48CDFCC09B_3**)Il2CppClass::FromTypeDefinitionIndex(FloorErosionDataComponent___c_TypeDefinitionIndex)->GetStaticField(0x2F4F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__CTOR_OFFSET))(this);
		}

		::Class_1_30B210AEDB34BA56* _OnEnable_b__5_0(::Struct_2_21CBD932FB56D3A8 context)
		{
			return ((::Class_1_30B210AEDB34BA56*(*)(::PVOID, ::Struct_2_21CBD932FB56D3A8))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___C__ONENABLE_B__5_0_OFFSET))(this, context);
		}
	};
}
