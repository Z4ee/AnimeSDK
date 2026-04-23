#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_73F802686FB6B1CE.h"
#include "unitysdk/System/Object.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_B8CEF7F69BEDEA3B;
class Class_1_CA0BB69AF30EB725;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8AD101AC5797B2CA_CLEAR_OFFSET UNITYSDK_OFFSET(0x8FC40D0)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x8FC4390)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0x8FC4180)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x8FC41D0)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x8FC3DA0)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0x8FC3F80)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_787019EE92D868C3_OFFSET UNITYSDK_OFFSET(0x8FC3670)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_7E2C5CFF5EA1BE6D_OFFSET UNITYSDK_OFFSET(0x8FC3A20)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0x8FC44C0)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8FC44B0)
#define CLASS_1_8AD101AC5797B2CA_METHOD_1_F6AE21AA4AB06AC6_OFFSET UNITYSDK_OFFSET(0x8FC4040)
#define CLASS_1_8AD101AC5797B2CA__CTOR_OFFSET UNITYSDK_OFFSET(0x8FC44D0)

inline static constexpr unsigned int Class_1_8AD101AC5797B2CA_TypeDefinitionIndex = 49891;

class Class_1_8AD101AC5797B2CA : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_1_5; // 0x10
	::RPG::GameCore::GameEntity* Field_1_3; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x30
	::RPG::GameCore::TaskContext* Field_1_0; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_787019EE92D868C3(::Struct_2_73F802686FB6B1CE a1, ::Class_1_CA0BB69AF30EB725* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_73F802686FB6B1CE, ::Class_1_CA0BB69AF30EB725*))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_787019EE92D868C3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskContext* Method_1_7E2C5CFF5EA1BE6D(::Class_1_B8CEF7F69BEDEA3B* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_2CAAA2FDF9170110* a3, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a4)
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID, ::Class_1_B8CEF7F69BEDEA3B*, ::RPG::GameCore::TaskContext*, ::Class_1_2CAAA2FDF9170110*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_7E2C5CFF5EA1BE6D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F6AE21AA4AB06AC6(::Class_1_CA0BB69AF30EB725* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA0BB69AF30EB725*))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_F6AE21AA4AB06AC6_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_0D8DB2DC8B47A973()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_0D8DB2DC8B47A973_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_1_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_1_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_8377BC0DCBA8CDB6()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD101AC5797B2CA_METHOD_1_8377BC0DCBA8CDB6_OFFSET))(this);
	}
};
