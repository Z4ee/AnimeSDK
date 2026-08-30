#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_23E2C0FB375410E2_METHOD_1_3EB49A5927E58ECA_OFFSET UNITYSDK_OFFSET(0x1847AD50)
#define CLASS_1_23E2C0FB375410E2_METHOD_1_FD162D65180D84DF_OFFSET UNITYSDK_OFFSET(0x1847A8C0)
#define CLASS_1_23E2C0FB375410E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1847B000)

inline static constexpr unsigned int Class_1_23E2C0FB375410E2_TypeDefinitionIndex = 66215;

class Class_1_23E2C0FB375410E2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23E2C0FB375410E2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_FD162D65180D84DF(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_23E2C0FB375410E2_METHOD_1_FD162D65180D84DF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* Method_1_3EB49A5927E58ECA(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_23E2C0FB375410E2_METHOD_1_3EB49A5927E58ECA_OFFSET))(this, a1);
	}
};
