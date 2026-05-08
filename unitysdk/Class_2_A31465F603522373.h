#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
class Class_2_F346500DFC680A13;
class Class_2_F8EB4D9464ADCCA1;
namespace MoleMole::Config { class NpcAccessoryVoConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_A31465F603522373_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA9897C0)
#define CLASS_2_A31465F603522373_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xA988EB0)
#define CLASS_2_A31465F603522373_FROMFLX_OFFSET UNITYSDK_OFFSET(0xA987BE0)
#define CLASS_2_A31465F603522373_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xA987830)
#define CLASS_2_A31465F603522373_METHOD_2_1E0F3071BDE16B53_OFFSET UNITYSDK_OFFSET(0xA98CCF0)
#define CLASS_2_A31465F603522373_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xA98CFD0)
#define CLASS_2_A31465F603522373_METHOD_2_2D08867FA34F8CAE_OFFSET UNITYSDK_OFFSET(0xA988F10)
#define CLASS_2_A31465F603522373_METHOD_2_2F895725807DEF82_OFFSET UNITYSDK_OFFSET(0xA98B010)
#define CLASS_2_A31465F603522373_METHOD_2_36D3B9CB4CD6C02B_OFFSET UNITYSDK_OFFSET(0xA98C590)
#define CLASS_2_A31465F603522373_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0xA9896D0)
#define CLASS_2_A31465F603522373_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0xA98CC60)
#define CLASS_2_A31465F603522373_METHOD_2_6F8DAD79D5F78DB5_OFFSET UNITYSDK_OFFSET(0xA98CA30)
#define CLASS_2_A31465F603522373_METHOD_2_7A0FB6DF30C72295_OFFSET UNITYSDK_OFFSET(0xA98BAA0)
#define CLASS_2_A31465F603522373_METHOD_2_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0xA987C60)
#define CLASS_2_A31465F603522373_METHOD_2_8D115C5AFA0ABB49_OFFSET UNITYSDK_OFFSET(0xA98BB50)
#define CLASS_2_A31465F603522373_METHOD_2_941AC6D34F0B28D7_OFFSET UNITYSDK_OFFSET(0xA98CC70)
#define CLASS_2_A31465F603522373_METHOD_2_9582F7AD5AFE4E71_OFFSET UNITYSDK_OFFSET(0xA98CE30)
#define CLASS_2_A31465F603522373_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xA987920)
#define CLASS_2_A31465F603522373_METHOD_2_CAB3BEA31D4DCC93_OFFSET UNITYSDK_OFFSET(0xA98C3E0)
#define CLASS_2_A31465F603522373_METHOD_2_D05E5D0A832ABF53_OFFSET UNITYSDK_OFFSET(0xA98B360)
#define CLASS_2_A31465F603522373_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0xA9877B0)
#define CLASS_2_A31465F603522373_METHOD_2_D6099D544AD64B1A_OFFSET UNITYSDK_OFFSET(0xA98C1E0)
#define CLASS_2_A31465F603522373_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0xA987990)
#define CLASS_2_A31465F603522373_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0xA98C9B0)
#define CLASS_2_A31465F603522373_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xA98C490)
#define CLASS_2_A31465F603522373_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0xA98B950)
#define CLASS_2_A31465F603522373__CTOR_OFFSET UNITYSDK_OFFSET(0xA98CA20)

inline static constexpr unsigned int Class_2_A31465F603522373_TypeDefinitionIndex = 78246;

class Class_2_A31465F603522373 : public ::MoleMole::Config::ConfigViewObjectTraitBase
{
public:
	::System::String* Field_2_8; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* Field_2_9; // 0x20
	::System::String* Field_2_7; // 0x28
	::System::String* Field_2_12; // 0x30
	::System::Int32 Field_2_1; // 0x38
	::System::Single Field_2_5; // 0x3C
	::System::Single Field_2_4; // 0x40
	::System::Boolean Field_2_11; // 0x44
	::System::Boolean Field_2_10; // 0x45
	::System::Boolean Field_2_3; // 0x46
	::System::Boolean Field_2_2; // 0x47
	::System::Boolean Field_2_6; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
	{
		return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_F91ACF27C085FD90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
	}

	::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
	}

	::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_POSTPROCESSENTITY_OFFSET))(this, a1);
	}

	::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_ONPOSTENTITYREADY_OFFSET))(this, a1);
	}

	::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_ONPOSTENTITYDISSOCIATE_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_6F8DAD79D5F78DB5(::UnityEngine::Animator* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_6F8DAD79D5F78DB5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_8D115C5AFA0ABB49(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Int32 a3, ::System::ValueTuple_2<::System::Single, ::System::Single> a4)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_8D115C5AFA0ABB49_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_36D3B9CB4CD6C02B(::MoleMole::EntityHandle a1, ::System::Int32 a2, ::System::ValueTuple_2<::System::Single, ::System::Single> a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_36D3B9CB4CD6C02B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_D6099D544AD64B1A(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_D6099D544AD64B1A_OFFSET))(a1, a2);
	}

	static ::Class_2_A31465F603522373* Method_2_1E0F3071BDE16B53(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_A31465F603522373*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_1E0F3071BDE16B53_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_2F895725807DEF82(::Foundation::ViewObject::EntityBuildContext& a1, ::System::Int32 a2, ::Class_2_F8EB4D9464ADCCA1* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::EntityBuildContext&, ::System::Int32, ::Class_2_F8EB4D9464ADCCA1*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_2F895725807DEF82_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_A31465F603522373* Method_2_9582F7AD5AFE4E71(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_A31465F603522373*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_9582F7AD5AFE4E71_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_7A0FB6DF30C72295(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_7A0FB6DF30C72295_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_D05E5D0A832ABF53(::Foundation::ViewObject::EntityBuildContext& a1, ::System::Int32 a2, ::Class_2_F346500DFC680A13* a3, ::Class_2_F8EB4D9464ADCCA1* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Boolean a7, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* a8)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::EntityBuildContext&, ::System::Int32, ::Class_2_F346500DFC680A13*, ::Class_2_F8EB4D9464ADCCA1*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_D05E5D0A832ABF53_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_2_2D08867FA34F8CAE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_2D08867FA34F8CAE_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_CAB3BEA31D4DCC93(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_CAB3BEA31D4DCC93_OFFSET))(a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_2_941AC6D34F0B28D7(::UnityEngine::Animator* a1, ::System::ValueTuple_2<::System::Single, ::System::Single> a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::UnityEngine::Animator*, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_941AC6D34F0B28D7_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}
};
