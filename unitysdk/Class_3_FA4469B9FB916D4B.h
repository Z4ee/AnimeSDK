#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAttachmentScale; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_FA4469B9FB916D4B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1432A110)
#define CLASS_3_FA4469B9FB916D4B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1432AF20)
#define CLASS_3_FA4469B9FB916D4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1432A0E0)

inline static constexpr unsigned int Class_3_FA4469B9FB916D4B_TypeDefinitionIndex = 52208;

class Class_3_FA4469B9FB916D4B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAttachmentScale*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FA4469B9FB916D4B_TypeDefinitionIndex)->GetStaticField(0x2D000);
	}
	::System::Boolean Field_3_1; // 0x28

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
