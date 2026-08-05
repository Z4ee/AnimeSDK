#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_1_C071969CF1309097;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_1A21BE302D7078BE_METHOD_2_13D66C43117B2D48_OFFSET UNITYSDK_OFFSET(0x1A7DA530)
#define CLASS_2_1A21BE302D7078BE_METHOD_2_447C6886DED7E74D_OFFSET UNITYSDK_OFFSET(0x1A7DA590)
#define CLASS_2_1A21BE302D7078BE_METHOD_2_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0x1A7DA650)
#define CLASS_2_1A21BE302D7078BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DA480)

inline static constexpr unsigned int Class_2_1A21BE302D7078BE_TypeDefinitionIndex = 74357;

class Class_2_1A21BE302D7078BE : public ::Foundation::Singleton_1<::Class_2_1A21BE302D7078BE*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::ObjectPoolOfReusable_1<::MoleMole::UIHollowChessPieceParticle*>*>* Field_2_0; // 0x10
	::Class_1_C071969CF1309097* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A21BE302D7078BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_13D66C43117B2D48(::MoleMole::UIHollowChessPieceParticle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle*))((::PBYTE)hIl2Cpp + CLASS_2_1A21BE302D7078BE_METHOD_2_13D66C43117B2D48_OFFSET))(this, a1);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_2_447C6886DED7E74D(::System::String* a1, ::MoleMole::Config::HollowChessboardParticleConfig* a2, ::UnityEngine::Transform* a3)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_1A21BE302D7078BE_METHOD_2_447C6886DED7E74D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A21BE302D7078BE_METHOD_2_96980C17A8BB1F06_OFFSET))(this);
	}
};
