#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/Struct_2_1BCFFD1346322700.h"
#include "unitysdk/System/Object.h"

class Class_1_8D63C35966A01AB9;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD27315C6663B104_CLEAR_OFFSET UNITYSDK_OFFSET(0x10661880)
#define CLASS_1_FD27315C6663B104_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10662140)
#define CLASS_1_FD27315C6663B104_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x106620E0)
#define CLASS_1_FD27315C6663B104_METHOD_1_3632A7413478F6C2_OFFSET UNITYSDK_OFFSET(0x10661ED0)
#define CLASS_1_FD27315C6663B104_METHOD_1_4B08A5EF9CAB1270_OFFSET UNITYSDK_OFFSET(0x10661960)
#define CLASS_1_FD27315C6663B104_METHOD_1_681ACDDA536ED585_OFFSET UNITYSDK_OFFSET(0x106617F0)
#define CLASS_1_FD27315C6663B104_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x10661A80)
#define CLASS_1_FD27315C6663B104_METHOD_1_76378384A11A7B16_OFFSET UNITYSDK_OFFSET(0x106618F0)
#define CLASS_1_FD27315C6663B104_METHOD_1_8C99611DABAE9C3C_OFFSET UNITYSDK_OFFSET(0x10661F70)
#define CLASS_1_FD27315C6663B104_METHOD_1_93637CD7AE4EB538_OFFSET UNITYSDK_OFFSET(0x10662130)
#define CLASS_1_FD27315C6663B104_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x106619C0)
#define CLASS_1_FD27315C6663B104_METHOD_1_D3B45CC300E6D4AB_OFFSET UNITYSDK_OFFSET(0x10661AE0)
#define CLASS_1_FD27315C6663B104__CTOR_OFFSET UNITYSDK_OFFSET(0x106621A0)

inline static constexpr unsigned int Class_1_FD27315C6663B104_TypeDefinitionIndex = 44054;

class Class_1_FD27315C6663B104 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_1BCFFD1346322700>* Field_1_0; // 0x10
	::Class_1_8D63C35966A01AB9* Field_1_1; // 0x18
	::RPG::GameCore::EntityRelationType Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_681ACDDA536ED585(::Class_1_8D63C35966A01AB9* a1, ::RPG::GameCore::EntityRelationType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D63C35966A01AB9*, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_681ACDDA536ED585_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_76378384A11A7B16(::RPG::GameCore::EntityRelationMemberType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_76378384A11A7B16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4B08A5EF9CAB1270(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_4B08A5EF9CAB1270_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_1_D3B45CC300E6D4AB(::RPG::GameCore::EntityRelationMemberType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_D3B45CC300E6D4AB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EntityRelationMemberType Method_1_3632A7413478F6C2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::EntityRelationMemberType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_3632A7413478F6C2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_8C99611DABAE9C3C(::RPG::GameCore::EntityRelationMemberType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_8C99611DABAE9C3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::RPG::GameCore::EntityRelationType Method_1_93637CD7AE4EB538()
	{
		return ((::RPG::GameCore::EntityRelationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_93637CD7AE4EB538_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD27315C6663B104_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
