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

#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_0C6BDDE9946460F0_OFFSET UNITYSDK_OFFSET(0x11C1D120)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_1419A0FF877B45DE_OFFSET UNITYSDK_OFFSET(0x11C1CE80)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_265C3045830397FF_OFFSET UNITYSDK_OFFSET(0x11C1C470)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_2F41CA255C758470_OFFSET UNITYSDK_OFFSET(0x11C1CD50)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_3CF7508BE2DE708E_OFFSET UNITYSDK_OFFSET(0x11C1DB50)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_4A9D3329E6131B36_OFFSET UNITYSDK_OFFSET(0x11C1C610)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_4D3011D67EF3E67E_OFFSET UNITYSDK_OFFSET(0x11C1BB70)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_71CC2708B4EAB72E_OFFSET UNITYSDK_OFFSET(0x11C1EC10)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_A8A36A4058398654_OFFSET UNITYSDK_OFFSET(0x11C1D860)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_AAC9F22E419418B7_OFFSET UNITYSDK_OFFSET(0x11C1E360)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_C0B339B8F17DCFB0_OFFSET UNITYSDK_OFFSET(0x11C1C760)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_CF6B015E4F1F4C36_OFFSET UNITYSDK_OFFSET(0x11C1E9E0)
#define CLASS_3_5D7DC49E6EAC7E42_METHOD_3_D93F3B13F04969A8_OFFSET UNITYSDK_OFFSET(0x11C1AD10)
#define CLASS_3_5D7DC49E6EAC7E42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C1AB00)
#define CLASS_3_5D7DC49E6EAC7E42__CTOR_OFFSET UNITYSDK_OFFSET(0x11C1AAD0)

inline static constexpr unsigned int Class_3_5D7DC49E6EAC7E42_TypeDefinitionIndex = 49717;

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

	::System::Void Method_3_D93F3B13F04969A8(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_D93F3B13F04969A8_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_3_265C3045830397FF(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_265C3045830397FF_OFFSET))(this, a1);
	}

	::System::Single Method_3_4A9D3329E6131B36(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_4A9D3329E6131B36_OFFSET))(this, a1);
	}

	::System::Void Method_3_4D3011D67EF3E67E(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_4D3011D67EF3E67E_OFFSET))(this, a1);
	}

	::System::Void Method_3_2F41CA255C758470(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::MVector3 a2, ::RPG::MQuaternion a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::MVector3, ::RPG::MQuaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_2F41CA255C758470_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_1419A0FF877B45DE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::MVector3 a3, ::RPG::MQuaternion a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MQuaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_1419A0FF877B45DE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* Method_3_0C6BDDE9946460F0(::RPG::MVector3 a1, ::RPG::MQuaternion a2, ::System::Single a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*(*)(::PVOID, ::RPG::MVector3, ::RPG::MQuaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_0C6BDDE9946460F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_AAC9F22E419418B7(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_AAC9F22E419418B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A8A36A4058398654(::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_A8A36A4058398654_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CF6B015E4F1F4C36(::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_CF6B015E4F1F4C36_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_C0B339B8F17DCFB0(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_C0B339B8F17DCFB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3CF7508BE2DE708E(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>* a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_3CF7508BE2DE708E_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::MVector3 Method_3_71CC2708B4EAB72E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB a3, ::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB a4, ::System::Single a5)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB, ::Class_3_5D7DC49E6EAC7E42_Struct_2_CCE9E585FC2C41AB, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_METHOD_3_71CC2708B4EAB72E_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
