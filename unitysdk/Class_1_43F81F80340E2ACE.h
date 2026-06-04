#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraSetAnimatorParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_43F81F80340E2ACE_METHOD_1_0B090CDB853EBD57_OFFSET UNITYSDK_OFFSET(0x136C3BC0)
#define CLASS_1_43F81F80340E2ACE_METHOD_1_2A56DB357D098349_OFFSET UNITYSDK_OFFSET(0x136C3D80)
#define CLASS_1_43F81F80340E2ACE_METHOD_1_4463BD9186CD8729_OFFSET UNITYSDK_OFFSET(0x136C38B0)
#define CLASS_1_43F81F80340E2ACE_METHOD_1_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x136C3600)
#define CLASS_1_43F81F80340E2ACE_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x136C35C0)
#define CLASS_1_43F81F80340E2ACE__CTOR_OFFSET UNITYSDK_OFFSET(0x136C3570)

inline static constexpr unsigned int Class_1_43F81F80340E2ACE_TypeDefinitionIndex = 72934;

class Class_1_43F81F80340E2ACE : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_0; // 0x10
	::RPG::GameCore::ChimeraSetAnimatorParam* Field_1_1; // 0x18
	::RPG::Client::Promises::Promise* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraSetAnimatorParam* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraSetAnimatorParam*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_70484F0C4668EBF2_OFFSET))(this);
	}

	::System::Void Method_1_4463BD9186CD8729(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_4463BD9186CD8729_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A56DB357D098349(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_2A56DB357D098349_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B090CDB853EBD57(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_0B090CDB853EBD57_OFFSET))(this, a1);
	}
};
