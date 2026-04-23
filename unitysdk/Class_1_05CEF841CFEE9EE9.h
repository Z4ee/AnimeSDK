#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_05CEF841CFEE9EE9_Class_3_CB82A2773748C75A;
namespace RPG::GameCore { class PointEvaluatorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_05CEF841CFEE9EE9_METHOD_1_8622CEF37B475BA1_OFFSET UNITYSDK_OFFSET(0x11AFA3A0)
#define CLASS_1_05CEF841CFEE9EE9_METHOD_1_8B80FC55914FF1FF_OFFSET UNITYSDK_OFFSET(0x11AFA250)
#define CLASS_1_05CEF841CFEE9EE9__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AFA4E0)

inline static constexpr unsigned int Class_1_05CEF841CFEE9EE9_TypeDefinitionIndex = 55439;

class Class_1_05CEF841CFEE9EE9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_05CEF841CFEE9EE9_Class_3_CB82A2773748C75A*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_05CEF841CFEE9EE9_Class_3_CB82A2773748C75A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05CEF841CFEE9EE9_TypeDefinitionIndex)->GetStaticField(0x46F80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_05CEF841CFEE9EE9__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_8B80FC55914FF1FF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_05CEF841CFEE9EE9_METHOD_1_8B80FC55914FF1FF_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_8622CEF37B475BA1(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_05CEF841CFEE9EE9_METHOD_1_8622CEF37B475BA1_OFFSET))(a1, a2, a3);
	}
};
