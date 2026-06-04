#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_EF452C8E9A5D3122;
namespace RPG::GameCore { class GroupInitMemberEntityDynamicValues; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C583CDEF67062B0_METHOD_3_AB46303CBADE3FEA_OFFSET UNITYSDK_OFFSET(0x143E5930)
#define CLASS_3_7C583CDEF67062B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143E5640)
#define CLASS_3_7C583CDEF67062B0__CTOR_OFFSET UNITYSDK_OFFSET(0x143E5610)

inline static constexpr unsigned int Class_3_7C583CDEF67062B0_TypeDefinitionIndex = 49474;

class Class_3_7C583CDEF67062B0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GroupInitMemberEntityDynamicValues*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupInitMemberEntityDynamicValues* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupInitMemberEntityDynamicValues*))((::PBYTE)hIl2Cpp + CLASS_3_7C583CDEF67062B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C583CDEF67062B0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_AB46303CBADE3FEA(::Class_1_EF452C8E9A5D3122* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF452C8E9A5D3122*))((::PBYTE)hIl2Cpp + CLASS_3_7C583CDEF67062B0_METHOD_3_AB46303CBADE3FEA_OFFSET))(this, a1);
	}
};
