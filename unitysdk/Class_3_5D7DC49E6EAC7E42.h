#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtSkillSetTargetPos; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_1419A0FF877B45DE_OFFSET UNITYSDK_OFFSET(0x13BCE9C0)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_43A8B4E3188BD221_OFFSET UNITYSDK_OFFSET(0x13BD06E0)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_4AD9CE826508A96D_OFFSET UNITYSDK_OFFSET(0x13BCDE60)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_64B97434B0ADE565_OFFSET UNITYSDK_OFFSET(0x13BCD4C0)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_71CC2708B4EAB72E_OFFSET UNITYSDK_OFFSET(0x13BD0930)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_9D1158CD01346946_OFFSET UNITYSDK_OFFSET(0x13BCF7A0)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_BE5F4642A8D30ECB_OFFSET UNITYSDK_OFFSET(0x13BD00D0)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_BEDE17B95978DBA5_OFFSET UNITYSDK_OFFSET(0x13BCE030)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_CA35AFFC7C3EF284_OFFSET UNITYSDK_OFFSET(0x13BCE1B0)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_D2F0C51A10B392D1_OFFSET UNITYSDK_OFFSET(0x13BCC650)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_DB97B972EB109B39_OFFSET UNITYSDK_OFFSET(0x13BCE890)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_DFB661879599D397_OFFSET UNITYSDK_OFFSET(0x13BCEC60)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_E0B496A62D339BF6_OFFSET UNITYSDK_OFFSET(0x13BCF3F0)
#define CLASS_3_5D7DC49E6EAC7E42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BCC430)
#define CLASS_3_5D7DC49E6EAC7E42__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCC400)

inline static constexpr unsigned int Class_3_5D7DC49E6EAC7E42_TypeDefinitionIndex = 50384;

class Class_3_5D7DC49E6EAC7E42 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtSkillSetTargetPos*>
{
public:
	::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillSetTargetPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillSetTargetPos*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_D2F0C51A10B392D1(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_D2F0C51A10B392D1_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_3_4AD9CE826508A96D(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_4AD9CE826508A96D_OFFSET))(this, a1);
	}

	::System::Single Method_3_BEDE17B95978DBA5(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_BEDE17B95978DBA5_OFFSET))(this, a1);
	}

	::System::Void Method_3_64B97434B0ADE565(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_64B97434B0ADE565_OFFSET))(this, a1);
	}

	::System::Void Method_3_DB97B972EB109B39(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::MVector3 a2, ::RPG::MQuaternion a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::MVector3, ::RPG::MQuaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_DB97B972EB109B39_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_1419A0FF877B45DE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::MVector3 a3, ::RPG::MQuaternion a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MQuaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_1419A0FF877B45DE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* Method_3_DFB661879599D397(::RPG::MVector3 a1, ::RPG::MQuaternion a2, ::System::Single a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*(*)(::PVOID, ::RPG::MVector3, ::RPG::MQuaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_DFB661879599D397_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BE5F4642A8D30ECB(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_BE5F4642A8D30ECB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E0B496A62D339BF6(::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_E0B496A62D339BF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_43A8B4E3188BD221(::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_43A8B4E3188BD221_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA35AFFC7C3EF284(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_CA35AFFC7C3EF284_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9D1158CD01346946(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_9D1158CD01346946_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::MVector3 Method_3_71CC2708B4EAB72E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB a3, ::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB a4, ::System::Single a5)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB, ::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_71CC2708B4EAB72E_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
