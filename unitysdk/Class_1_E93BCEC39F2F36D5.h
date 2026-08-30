#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E93BCEC39F2F36D5_Class_3_3A380764862D6B7D;
namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E93BCEC39F2F36D5_METHOD_1_273AB301632D7717_OFFSET UNITYSDK_OFFSET(0x1897D030)
#define CLASS_1_E93BCEC39F2F36D5_METHOD_1_C7C03A5C72BF12B1_OFFSET UNITYSDK_OFFSET(0x1897D870)
#define CLASS_1_E93BCEC39F2F36D5_METHOD_1_DE0EC985778391B3_OFFSET UNITYSDK_OFFSET(0x1897D1F0)
#define CLASS_1_E93BCEC39F2F36D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1897DDA0)

inline static constexpr unsigned int Class_1_E93BCEC39F2F36D5_TypeDefinitionIndex = 60249;

class Class_1_E93BCEC39F2F36D5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_E93BCEC39F2F36D5_Class_3_3A380764862D6B7D*>** StaticGet_JEBACNHEEPO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_E93BCEC39F2F36D5_Class_3_3A380764862D6B7D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E93BCEC39F2F36D5_TypeDefinitionIndex)->GetStaticField(0x4450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E93BCEC39F2F36D5__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_273AB301632D7717(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_E93BCEC39F2F36D5_METHOD_1_273AB301632D7717_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_DE0EC985778391B3(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_E93BCEC39F2F36D5_METHOD_1_DE0EC985778391B3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C7C03A5C72BF12B1(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_E93BCEC39F2F36D5_METHOD_1_C7C03A5C72BF12B1_OFFSET))(a1, a2, a3);
	}
};
