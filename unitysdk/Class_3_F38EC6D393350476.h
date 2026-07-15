#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_610EEE5D7459CDEC.h"

namespace RPG::GameCore { class NewFireMultiProjectiles; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F38EC6D393350476_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1646A290)
#define CLASS_3_F38EC6D393350476_METHOD_3_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x16469B00)
#define CLASS_3_F38EC6D393350476_METHOD_3_BF9BB9E2BBF3B6F4_OFFSET UNITYSDK_OFFSET(0x16469820)
#define CLASS_3_F38EC6D393350476_METHOD_3_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x16469EE0)
#define CLASS_3_F38EC6D393350476__CTOR_OFFSET UNITYSDK_OFFSET(0x16469810)

inline static constexpr unsigned int Class_3_F38EC6D393350476_TypeDefinitionIndex = 52732;

class Class_3_F38EC6D393350476 : public ::Class_2_610EEE5D7459CDEC
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::NewProjectileConfig*>* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireMultiProjectiles* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireMultiProjectiles*))((::PBYTE)hIl2Cpp + CLASS_3_F38EC6D393350476__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BF9BB9E2BBF3B6F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F38EC6D393350476_METHOD_3_BF9BB9E2BBF3B6F4_OFFSET))(this);
	}

	::System::Void Method_3_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F38EC6D393350476_METHOD_3_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_3_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F38EC6D393350476_METHOD_3_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F38EC6D393350476_DISPOSE_OFFSET))(this);
	}
};
