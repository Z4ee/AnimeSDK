#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_AA32F80F0938DB89_Class_3_CB82A2773748C75A;
namespace RPG::GameCore { class PointEvaluatorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AA32F80F0938DB89_METHOD_1_58B02D680908E1F8_OFFSET UNITYSDK_OFFSET(0x18E792A0)
#define CLASS_1_AA32F80F0938DB89_METHOD_1_AE2E99ED4D9096E4_OFFSET UNITYSDK_OFFSET(0x18E79150)
#define CLASS_1_AA32F80F0938DB89__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E793E0)

inline static constexpr unsigned int Class_1_AA32F80F0938DB89_TypeDefinitionIndex = 60246;

class Class_1_AA32F80F0938DB89 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_AA32F80F0938DB89_Class_3_CB82A2773748C75A*>** StaticGet_GGEDMGOGICB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_AA32F80F0938DB89_Class_3_CB82A2773748C75A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA32F80F0938DB89_TypeDefinitionIndex)->GetStaticField(0x47D30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AA32F80F0938DB89__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_AE2E99ED4D9096E4(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AA32F80F0938DB89_METHOD_1_AE2E99ED4D9096E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_58B02D680908E1F8(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AA32F80F0938DB89_METHOD_1_58B02D680908E1F8_OFFSET))(a1, a2, a3);
	}
};
