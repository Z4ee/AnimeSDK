#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2313B3CDE834A2E2;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_F7886F522CF5D0F4_METHOD_2_235AE708AC428FC1_OFFSET UNITYSDK_OFFSET(0x159326D0)
#define CLASS_2_F7886F522CF5D0F4_METHOD_2_2F37CE92CD3A4913_OFFSET UNITYSDK_OFFSET(0x159326C0)
#define CLASS_2_F7886F522CF5D0F4_METHOD_2_5060B8D584584727_1_OFFSET UNITYSDK_OFFSET(0x15932A70)
#define CLASS_2_F7886F522CF5D0F4_METHOD_2_5060B8D584584727_OFFSET UNITYSDK_OFFSET(0x159329A0)
#define CLASS_2_F7886F522CF5D0F4_METHOD_2_73AA88559AD75873_OFFSET UNITYSDK_OFFSET(0x159327B0)
#define CLASS_2_F7886F522CF5D0F4_METHOD_2_9AE1E7ACBB290CDF_OFFSET UNITYSDK_OFFSET(0x15932820)
#define CLASS_2_F7886F522CF5D0F4_METHOD_2_A1596F65A2679075_OFFSET UNITYSDK_OFFSET(0x159328E0)
#define CLASS_2_F7886F522CF5D0F4_METHOD_2_A6B04D1DE1F354A1_OFFSET UNITYSDK_OFFSET(0x15932A00)
#define CLASS_2_F7886F522CF5D0F4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x159325B0)
#define CLASS_2_F7886F522CF5D0F4__CTOR_OFFSET UNITYSDK_OFFSET(0x15932460)
#define CLASS_2_F7886F522CF5D0F4__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x15932AD0)

inline static constexpr unsigned int Class_2_F7886F522CF5D0F4_TypeDefinitionIndex = 53517;

class Class_2_F7886F522CF5D0F4 : public ::RPG::GameCore::TaskContext
{
public:
	::Class_1_2313B3CDE834A2E2* OENHLCNCOAI; // 0xA8
	::Il2CppArray<::System::String*>* LIFFHFDCLMK; // 0xB0
	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* JGMLFDLIKJA; // 0xB8
	::Il2CppArray<::RPG::GameCore::GameEntity*>* IBNFKPCLAPE; // 0xC0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a4, ::Class_1_2313B3CDE834A2E2* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::Class_1_2313B3CDE834A2E2*))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* Method_2_2F37CE92CD3A4913()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4_METHOD_2_2F37CE92CD3A4913_OFFSET))(this);
	}

	::System::Boolean Method_2_235AE708AC428FC1(::System::String* a1, ::RPG::GameCore::GameEntity*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4_METHOD_2_235AE708AC428FC1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_73AA88559AD75873(::System::Object* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4_METHOD_2_73AA88559AD75873_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9AE1E7ACBB290CDF(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4_METHOD_2_9AE1E7ACBB290CDF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1596F65A2679075(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4_METHOD_2_A1596F65A2679075_OFFSET))(this, a1);
	}

	::System::Void Method_2_5060B8D584584727(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4_METHOD_2_5060B8D584584727_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A6B04D1DE1F354A1(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4_METHOD_2_A6B04D1DE1F354A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5060B8D584584727_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4_METHOD_2_5060B8D584584727_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* _GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7886F522CF5D0F4__GETSELFINSTANCE_OFFSET))(this);
	}
};
