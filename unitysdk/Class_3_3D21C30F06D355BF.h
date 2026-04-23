#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_2_24193089A4D2255F;
class Class_4_AFB38A1B167FD0D5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3D21C30F06D355BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AFA490)
#define CLASS_3_3D21C30F06D355BF_METHOD_3_92B219A5BB78D2BB_OFFSET UNITYSDK_OFFSET(0x12AFA8A0)
#define CLASS_3_3D21C30F06D355BF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AFA4D0)
#define CLASS_3_3D21C30F06D355BF__CTOR_OFFSET UNITYSDK_OFFSET(0x12AFA3B0)
#define CLASS_3_3D21C30F06D355BF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AFABE0)

inline static constexpr unsigned int Class_3_3D21C30F06D355BF_TypeDefinitionIndex = 49684;

class Class_3_3D21C30F06D355BF : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_AFB38A1B167FD0D5*>
{
public:
	::RPG::GameCore::StringHash Field_3_1; // 0x28
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_2_24193089A4D2255F*> Field_3_0; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_AFB38A1B167FD0D5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_AFB38A1B167FD0D5*))((::PBYTE)hIl2Cpp + CLASS_3_3D21C30F06D355BF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D21C30F06D355BF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D21C30F06D355BF_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_92B219A5BB78D2BB(::Class_2_24193089A4D2255F* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_3_3D21C30F06D355BF_METHOD_3_92B219A5BB78D2BB_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D21C30F06D355BF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
