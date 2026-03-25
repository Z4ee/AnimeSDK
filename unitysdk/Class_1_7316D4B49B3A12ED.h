#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class PointEvaluatorConfig; }
namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7316D4B49B3A12ED_METHOD_1_2A6E1EF8E4E46C2D_OFFSET UNITYSDK_OFFSET(0x8732940)
#define CLASS_1_7316D4B49B3A12ED_METHOD_1_40A773C440341AE2_OFFSET UNITYSDK_OFFSET(0x8732AA0)
#define CLASS_1_7316D4B49B3A12ED_METHOD_1_AB375F6D8694AD63_OFFSET UNITYSDK_OFFSET(0x8732BB0)

inline static constexpr unsigned int Class_1_7316D4B49B3A12ED_TypeDefinitionIndex = 48696;

class Class_1_7316D4B49B3A12ED : public ::System::Object
{
public:
	static ::System::Boolean Method_1_2A6E1EF8E4E46C2D(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::RPG::GameCore::PointEvaluatorConfig* a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_7316D4B49B3A12ED_METHOD_1_2A6E1EF8E4E46C2D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_40A773C440341AE2(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_7316D4B49B3A12ED_METHOD_1_40A773C440341AE2_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_AB375F6D8694AD63(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_7316D4B49B3A12ED_METHOD_1_AB375F6D8694AD63_OFFSET))(a1, a2, a3);
	}
};
