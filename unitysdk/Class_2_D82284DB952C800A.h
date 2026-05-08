#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_D82284DB952C800A_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10B4D5A0)
#define CLASS_2_D82284DB952C800A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10B4D290)
#define CLASS_2_D82284DB952C800A_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10B4CEC0)
#define CLASS_2_D82284DB952C800A_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x10B4CC50)
#define CLASS_2_D82284DB952C800A_METHOD_2_1E0F3071BDE16B53_OFFSET UNITYSDK_OFFSET(0x10B4D950)
#define CLASS_2_D82284DB952C800A_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x10B4D940)
#define CLASS_2_D82284DB952C800A_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x10B4CF40)
#define CLASS_2_D82284DB952C800A_METHOD_2_9582F7AD5AFE4E71_OFFSET UNITYSDK_OFFSET(0x10B4D7A0)
#define CLASS_2_D82284DB952C800A_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x10B4CC00)
#define CLASS_2_D82284DB952C800A_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x10B4CD40)
#define CLASS_2_D82284DB952C800A_METHOD_2_E0AC97338167133E_OFFSET UNITYSDK_OFFSET(0x10B4D2F0)
#define CLASS_2_D82284DB952C800A_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x10B4CDB0)
#define CLASS_2_D82284DB952C800A_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x10B4D5F0)
#define CLASS_2_D82284DB952C800A__CTOR_OFFSET UNITYSDK_OFFSET(0x10B4D790)

inline static constexpr unsigned int Class_2_D82284DB952C800A_TypeDefinitionIndex = 78893;

class Class_2_D82284DB952C800A : public ::MoleMole::Config::ConfigViewObjectTraitBase
{
public:
	::System::String* Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
	{
		return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
	}

	::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_POSTPROCESSENTITY_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E0AC97338167133E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_METHOD_2_E0AC97338167133E_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D82284DB952C800A* Method_2_9582F7AD5AFE4E71(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_D82284DB952C800A*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_METHOD_2_9582F7AD5AFE4E71_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D82284DB952C800A* Method_2_1E0F3071BDE16B53(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_D82284DB952C800A*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D82284DB952C800A_METHOD_2_1E0F3071BDE16B53_OFFSET))(a1);
	}
};
