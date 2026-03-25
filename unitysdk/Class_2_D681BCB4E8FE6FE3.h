#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D.h"

class Class_0_16E4307DCC419505_201;
class Class_0_16E4307DCC419505_85;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_9850514C0F89B91A;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D681BCB4E8FE6FE3_METHOD_2_3228575429DB2F42_OFFSET UNITYSDK_OFFSET(0x883F780)
#define CLASS_2_D681BCB4E8FE6FE3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x883F5B0)
#define CLASS_2_D681BCB4E8FE6FE3_METHOD_2_926A6229E864AA95_OFFSET UNITYSDK_OFFSET(0x883FCD0)
#define CLASS_2_D681BCB4E8FE6FE3_METHOD_2_C3C468D4782C8090_OFFSET UNITYSDK_OFFSET(0x883F610)
#define CLASS_2_D681BCB4E8FE6FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x883F4F0)

inline static constexpr unsigned int Class_2_D681BCB4E8FE6FE3_TypeDefinitionIndex = 62256;

class Class_2_D681BCB4E8FE6FE3 : public ::Class_1_FD893FD36F6A3A6D
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* Field_2_1; // 0x20
	::Class_1_47EE63CB5C4DC8FC_5* Field_2_2; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_85* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_D681BCB4E8FE6FE3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D681BCB4E8FE6FE3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_C3C468D4782C8090(::Class_0_16E4307DCC419505_85* a1, ::Class_2_9850514C0F89B91A* a2, ::System::String* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_2_9850514C0F89B91A*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D681BCB4E8FE6FE3_METHOD_2_C3C468D4782C8090_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3228575429DB2F42(::Class_0_16E4307DCC419505_85* a1, ::Class_2_9850514C0F89B91A* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_2_9850514C0F89B91A*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D681BCB4E8FE6FE3_METHOD_2_3228575429DB2F42_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_926A6229E864AA95(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_2_D681BCB4E8FE6FE3_METHOD_2_926A6229E864AA95_OFFSET))(this, a1);
	}
};
