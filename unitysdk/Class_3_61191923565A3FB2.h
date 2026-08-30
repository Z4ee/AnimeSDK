#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAttachmentVisibility; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_61191923565A3FB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15925330)
#define CLASS_3_61191923565A3FB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15925BF0)
#define CLASS_3_61191923565A3FB2__CTOR_OFFSET UNITYSDK_OFFSET(0x15925300)

inline static constexpr unsigned int Class_3_61191923565A3FB2_TypeDefinitionIndex = 56076;

class Class_3_61191923565A3FB2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAttachmentVisibility*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_OHOKHLEJHKA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_61191923565A3FB2_TypeDefinitionIndex)->GetStaticField(0x5F990);
	}
	::System::Boolean LEIGKHEMCGE; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachmentVisibility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachmentVisibility*))((::PBYTE)hIl2Cpp + CLASS_3_61191923565A3FB2__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61191923565A3FB2__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61191923565A3FB2_ONTASKBEGIN_OFFSET))(this);
	}
};
