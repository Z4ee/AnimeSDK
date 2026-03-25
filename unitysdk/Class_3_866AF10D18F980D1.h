#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_866AF10D18F980D1_METHOD_3_5047ACE19DCECCF4_1_OFFSET UNITYSDK_OFFSET(0x8EB39E0)
#define CLASS_3_866AF10D18F980D1_METHOD_3_5047ACE19DCECCF4_OFFSET UNITYSDK_OFFSET(0x8EB3770)
#define CLASS_3_866AF10D18F980D1_METHOD_3_C7278F106790159B_OFFSET UNITYSDK_OFFSET(0x8EB3C60)
#define CLASS_3_866AF10D18F980D1__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB3C50)

inline static constexpr unsigned int Class_3_866AF10D18F980D1_TypeDefinitionIndex = 63009;

class Class_3_866AF10D18F980D1 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_866AF10D18F980D1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_5047ACE19DCECCF4(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_866AF10D18F980D1_METHOD_3_5047ACE19DCECCF4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_5047ACE19DCECCF4_1(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_866AF10D18F980D1_METHOD_3_5047ACE19DCECCF4_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C7278F106790159B(::Class_1_C4FD36003027AC99* P0, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* P1, ::RPG::GameCore::ChimeraDuelEffectConfig* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_866AF10D18F980D1_METHOD_3_C7278F106790159B_OFFSET))(this, P0, P1, P2);
	}
};
