#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeData.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_2_5C38134D4169B6E0;
class Class_3_620977F55CD7E401;
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_A2411B5E0E7D032D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B52270)
#define CLASS_1_A2411B5E0E7D032D_METHOD_1_3F69F50F56A8F4EC_OFFSET UNITYSDK_OFFSET(0x12B52470)
#define CLASS_1_A2411B5E0E7D032D_METHOD_1_605C677557F96336_OFFSET UNITYSDK_OFFSET(0x12B52520)
#define CLASS_1_A2411B5E0E7D032D_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x12B51F80)
#define CLASS_1_A2411B5E0E7D032D_ONGROUPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x12B52410)
#define CLASS_1_A2411B5E0E7D032D__CTOR_OFFSET UNITYSDK_OFFSET(0x12B51E60)

inline static constexpr unsigned int Class_1_A2411B5E0E7D032D_TypeDefinitionIndex = 71107;

class Class_1_A2411B5E0E7D032D : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::Class_2_5C38134D4169B6E0* Field_1_0; // 0x18
	::Class_2_000597E145D7A42A<::System::Int32>* Field_1_3; // 0x20
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_1; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Boolean Field_1_4; // 0x34

	::System::Void _ctor(::Foundation::ViewObject::GroupMemberIdentifier a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A2411B5E0E7D032D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2411B5E0E7D032D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnGroupStateChanged(::Foundation::ViewObject::Subsystem::GroupStateChangeData a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeData))((::PBYTE)hIl2Cpp + CLASS_1_A2411B5E0E7D032D_ONGROUPSTATECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2411B5E0E7D032D_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_1_3F69F50F56A8F4EC(::System::Boolean a1, ::Class_3_620977F55CD7E401* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_620977F55CD7E401*))((::PBYTE)hIl2Cpp + CLASS_1_A2411B5E0E7D032D_METHOD_1_3F69F50F56A8F4EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_605C677557F96336(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_A2411B5E0E7D032D_METHOD_1_605C677557F96336_OFFSET))(this, a1);
	}
};
