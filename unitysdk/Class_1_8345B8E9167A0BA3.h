#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3A031B4969E41A12;
class Class_1_56A43BFF49688AAE;
class Class_1_5F96B92B05C740DB;
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8345B8E9167A0BA3_METHOD_1_1757A5346B290CED_1_OFFSET UNITYSDK_OFFSET(0x10577950)
#define CLASS_1_8345B8E9167A0BA3_METHOD_1_1757A5346B290CED_OFFSET UNITYSDK_OFFSET(0x10577870)
#define CLASS_1_8345B8E9167A0BA3_METHOD_1_19575D1AD52D1399_OFFSET UNITYSDK_OFFSET(0x10577C10)
#define CLASS_1_8345B8E9167A0BA3_METHOD_1_66F501070C8F9EA1_OFFSET UNITYSDK_OFFSET(0x10577A30)
#define CLASS_1_8345B8E9167A0BA3_METHOD_1_A1542180976200BC_OFFSET UNITYSDK_OFFSET(0x10575CB0)
#define CLASS_1_8345B8E9167A0BA3_METHOD_1_C03074CAF4801A1C_OFFSET UNITYSDK_OFFSET(0x10576B70)
#define CLASS_1_8345B8E9167A0BA3_METHOD_1_FDC75E773C3424A0_OFFSET UNITYSDK_OFFSET(0x10575D60)
#define CLASS_1_8345B8E9167A0BA3__CCTOR_OFFSET UNITYSDK_OFFSET(0x10577E00)
#define CLASS_1_8345B8E9167A0BA3__CTOR_OFFSET UNITYSDK_OFFSET(0x10575A30)

inline static constexpr unsigned int Class_1_8345B8E9167A0BA3_TypeDefinitionIndex = 57493;

class Class_1_8345B8E9167A0BA3 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8345B8E9167A0BA3_TypeDefinitionIndex)->GetStaticField(0x190F0);
	}
	::System::Collections::Generic::Dictionary_2<::Class_1_5F96B92B05C740DB*, ::Class_1_3A031B4969E41A12*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*, ::Class_1_3A031B4969E41A12*>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*, ::Class_1_3A031B4969E41A12*>* Field_1_4; // 0x20
	::Class_1_56A43BFF49688AAE* Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::Class_1_5F96B92B05C740DB*, ::Class_1_3A031B4969E41A12*>* Field_1_3; // 0x30
	::UnityEngine::Vector3 Field_1_1; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8345B8E9167A0BA3__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8345B8E9167A0BA3__CCTOR_OFFSET))();
	}

	::System::Void Method_1_A1542180976200BC(::Il2CppArray<::Class_1_3A031B4969E41A12*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_3A031B4969E41A12*>*))((::PBYTE)hIl2Cpp + CLASS_1_8345B8E9167A0BA3_METHOD_1_A1542180976200BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDC75E773C3424A0(::Class_1_5F96B92B05C740DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F96B92B05C740DB*))((::PBYTE)hIl2Cpp + CLASS_1_8345B8E9167A0BA3_METHOD_1_FDC75E773C3424A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_C03074CAF4801A1C(::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*))((::PBYTE)hIl2Cpp + CLASS_1_8345B8E9167A0BA3_METHOD_1_C03074CAF4801A1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_1757A5346B290CED(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8345B8E9167A0BA3_METHOD_1_1757A5346B290CED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1757A5346B290CED_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8345B8E9167A0BA3_METHOD_1_1757A5346B290CED_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_66F501070C8F9EA1(::Class_1_5F96B92B05C740DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F96B92B05C740DB*))((::PBYTE)hIl2Cpp + CLASS_1_8345B8E9167A0BA3_METHOD_1_66F501070C8F9EA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_19575D1AD52D1399(::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084*))((::PBYTE)hIl2Cpp + CLASS_1_8345B8E9167A0BA3_METHOD_1_19575D1AD52D1399_OFFSET))(this, a1);
	}
};
