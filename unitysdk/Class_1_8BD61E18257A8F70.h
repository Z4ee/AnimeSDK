#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FACDDA8DA3FDFF6D;
namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ComposeItemData; }
namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_8BD61E18257A8F70_METHOD_1_651E5DD8456083CA_OFFSET UNITYSDK_OFFSET(0x111A8330)
#define CLASS_1_8BD61E18257A8F70_METHOD_1_C93D8D6C2779D266_OFFSET UNITYSDK_OFFSET(0x111A8520)
#define CLASS_1_8BD61E18257A8F70__CTOR_OFFSET UNITYSDK_OFFSET(0x111A86C0)

inline static constexpr unsigned int Class_1_8BD61E18257A8F70_TypeDefinitionIndex = 60503;

class Class_1_8BD61E18257A8F70 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BD61E18257A8F70__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_651E5DD8456083CA(::Class_1_FACDDA8DA3FDFF6D* a1, ::RPG::Client::ComposeItemData* a2, ::RPG::GameCore::ItemConfig* a3, ::System::UInt32 a4, ::System::UInt32& a5, ::RPG::Client::ComposeItemCost*& a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FACDDA8DA3FDFF6D*, ::RPG::Client::ComposeItemData*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&, ::RPG::Client::ComposeItemCost*&))((::PBYTE)hIl2Cpp + CLASS_1_8BD61E18257A8F70_METHOD_1_651E5DD8456083CA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C93D8D6C2779D266(::Class_1_FACDDA8DA3FDFF6D* a1, ::RPG::Client::ComposeItemCost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FACDDA8DA3FDFF6D*, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + CLASS_1_8BD61E18257A8F70_METHOD_1_C93D8D6C2779D266_OFFSET))(this, a1, a2);
	}
};
