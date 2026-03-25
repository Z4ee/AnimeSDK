#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class OpenFarmRelic; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F5F5742E0D3501CA_METHOD_3_5C6304499FC2ECE9_OFFSET UNITYSDK_OFFSET(0x10B35130)
#define CLASS_3_F5F5742E0D3501CA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B34FC0)
#define CLASS_3_F5F5742E0D3501CA__CTOR_OFFSET UNITYSDK_OFFSET(0x10B34EB0)
#define CLASS_3_F5F5742E0D3501CA___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B351D0)

inline static constexpr unsigned int Class_3_F5F5742E0D3501CA_TypeDefinitionIndex = 46981;

class Class_3_F5F5742E0D3501CA : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenFarmRelic*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenFarmRelic* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenFarmRelic*))((::PBYTE)hIl2Cpp + CLASS_3_F5F5742E0D3501CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F5F5742E0D3501CA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_5C6304499FC2ECE9(::RPG::GameCore::PropComponent* a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_F5F5742E0D3501CA_METHOD_3_5C6304499FC2ECE9_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F5F5742E0D3501CA___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
