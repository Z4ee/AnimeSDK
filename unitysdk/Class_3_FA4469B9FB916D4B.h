#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAttachmentScale; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_FA4469B9FB916D4B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162A0CA0)
#define CLASS_3_FA4469B9FB916D4B__CCTOR_OFFSET UNITYSDK_OFFSET(0x162A1B40)
#define CLASS_3_FA4469B9FB916D4B__CTOR_OFFSET UNITYSDK_OFFSET(0x162A0C70)

inline static constexpr unsigned int Class_3_FA4469B9FB916D4B_TypeDefinitionIndex = 56074;

class Class_3_FA4469B9FB916D4B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAttachmentScale*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_OHOKHLEJHKA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FA4469B9FB916D4B_TypeDefinitionIndex)->GetStaticField(0x5E760);
	}
	::System::Boolean LEIGKHEMCGE; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachmentScale* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachmentScale*))((::PBYTE)hIl2Cpp + CLASS_3_FA4469B9FB916D4B__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FA4469B9FB916D4B__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA4469B9FB916D4B_ONTASKBEGIN_OFFSET))(this);
	}
};
