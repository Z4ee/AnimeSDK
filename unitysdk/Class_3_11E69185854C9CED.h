#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_2A8A7F9C322BA9B7;
namespace RPG::GameCore { class GroupInitMemberEntityAnimParameter; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_11E69185854C9CED_METHOD_3_23AF66F686C9E513_OFFSET UNITYSDK_OFFSET(0xC0B9080)
#define CLASS_3_11E69185854C9CED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0B8D00)
#define CLASS_3_11E69185854C9CED__CTOR_OFFSET UNITYSDK_OFFSET(0xC0B8CD0)

inline static constexpr unsigned int Class_3_11E69185854C9CED_TypeDefinitionIndex = 48807;

class Class_3_11E69185854C9CED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GroupInitMemberEntityAnimParameter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupInitMemberEntityAnimParameter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupInitMemberEntityAnimParameter*))((::PBYTE)hIl2Cpp + CLASS_3_11E69185854C9CED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11E69185854C9CED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_2A8A7F9C322BA9B7*>* Method_3_23AF66F686C9E513()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2A8A7F9C322BA9B7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11E69185854C9CED_METHOD_3_23AF66F686C9E513_OFFSET))(this);
	}
};
