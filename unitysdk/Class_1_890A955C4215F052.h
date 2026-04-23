#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_890A955C4215F052_Class_3_3A380764862D6B7D;
namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_890A955C4215F052_METHOD_1_4BE90555AE3BA727_OFFSET UNITYSDK_OFFSET(0x11D45690)
#define CLASS_1_890A955C4215F052_METHOD_1_4C2DEC548B0A11AD_OFFSET UNITYSDK_OFFSET(0x11D45880)
#define CLASS_1_890A955C4215F052_METHOD_1_C7C03A5C72BF12B1_OFFSET UNITYSDK_OFFSET(0x11D46110)
#define CLASS_1_890A955C4215F052__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D46620)

inline static constexpr unsigned int Class_1_890A955C4215F052_TypeDefinitionIndex = 55442;

class Class_1_890A955C4215F052 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_890A955C4215F052_Class_3_3A380764862D6B7D*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_890A955C4215F052_Class_3_3A380764862D6B7D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_890A955C4215F052_TypeDefinitionIndex)->GetStaticField(0x54750);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_890A955C4215F052__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_4BE90555AE3BA727(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_890A955C4215F052_METHOD_1_4BE90555AE3BA727_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4C2DEC548B0A11AD(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_890A955C4215F052_METHOD_1_4C2DEC548B0A11AD_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C7C03A5C72BF12B1(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_890A955C4215F052_METHOD_1_C7C03A5C72BF12B1_OFFSET))(a1, a2, a3);
	}
};
