#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormationPriorityType.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FormationAssetConfig; }
namespace RPG::GameCore { class FormationData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LocationData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_490A0BCC1006F57B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1425F3A0)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_0AF4CE7C8DFA88EA_OFFSET UNITYSDK_OFFSET(0x14262FD0)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_1BB4029F51995479_OFFSET UNITYSDK_OFFSET(0x1425FAD0)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_391017978184B77D_OFFSET UNITYSDK_OFFSET(0x1425FD60)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_476A0C9A76106F66_OFFSET UNITYSDK_OFFSET(0x14262120)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_49ADA46607FD0232_OFFSET UNITYSDK_OFFSET(0x14262EE0)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_4EB43C16317324C2_OFFSET UNITYSDK_OFFSET(0x14262CF0)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_71B491B8E8FC8DB1_OFFSET UNITYSDK_OFFSET(0x14263210)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_875B5A2C484EB12F_OFFSET UNITYSDK_OFFSET(0x1425FC80)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_AA9B228A20DFC054_OFFSET UNITYSDK_OFFSET(0x14263510)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_BD80C6357E7F49AB_OFFSET UNITYSDK_OFFSET(0x1425F940)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_E59814C03DDCB2BD_OFFSET UNITYSDK_OFFSET(0x1425FBC0)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_E8AA568336882BB4_OFFSET UNITYSDK_OFFSET(0x14262B50)
#define CLASS_1_490A0BCC1006F57B_METHOD_1_EB313FC0143FF24A_OFFSET UNITYSDK_OFFSET(0x14262470)
#define CLASS_1_490A0BCC1006F57B__CTOR_OFFSET UNITYSDK_OFFSET(0x1425F4A0)

inline static constexpr unsigned int Class_1_490A0BCC1006F57B_TypeDefinitionIndex = 55424;

class Class_1_490A0BCC1006F57B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::FormationAssetConfig*>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntityList*>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FormationData*>* Field_1_5; // 0x38
	::RPG::GameCore::GameWorld* Field_1_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_1_BD80C6357E7F49AB(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_BD80C6357E7F49AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_1BB4029F51995479(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_1BB4029F51995479_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntityList* Method_1_E59814C03DDCB2BD(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_E59814C03DDCB2BD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FormationData* Method_1_875B5A2C484EB12F(::System::String* a1)
	{
		return ((::RPG::GameCore::FormationData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_875B5A2C484EB12F_OFFSET))(this, a1);
	}

	::System::Void Method_1_391017978184B77D(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::String* a4, ::System::Boolean a5, ::RPG::GameCore::TaskContext* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_391017978184B77D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_EB313FC0143FF24A(::RPG::GameCore::TaskContext* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Quaternion a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::RPG::GameCore::FormationData* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32, ::UnityEngine::Quaternion, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::FormationData*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_EB313FC0143FF24A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_E8AA568336882BB4(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_E8AA568336882BB4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::GameEntity* Method_1_476A0C9A76106F66(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::LocationData* a3, ::RPG::GameCore::TaskContext* a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::LocationData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_476A0C9A76106F66_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_4EB43C16317324C2(::RPG::GameCore::FormationPriorityType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FormationPriorityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_4EB43C16317324C2_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_49ADA46607FD0232(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_49ADA46607FD0232_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0AF4CE7C8DFA88EA(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_0AF4CE7C8DFA88EA_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_71B491B8E8FC8DB1(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::TaskContext* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_71B491B8E8FC8DB1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_AA9B228A20DFC054(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_490A0BCC1006F57B_METHOD_1_AA9B228A20DFC054_OFFSET))(this, a1, a2);
	}
};
