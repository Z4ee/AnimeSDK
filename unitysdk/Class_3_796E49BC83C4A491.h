#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChessLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_796E49BC83C4A491_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99B6180)
#define CLASS_3_796E49BC83C4A491_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99B61C0)
#define CLASS_3_796E49BC83C4A491__CTOR_OFFSET UNITYSDK_OFFSET(0x99B6150)
#define CLASS_3_796E49BC83C4A491___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99B62D0)

inline static constexpr unsigned int Class_3_796E49BC83C4A491_TypeDefinitionIndex = 45203;

class Class_3_796E49BC83C4A491 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessLookAt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_796E49BC83C4A491__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_796E49BC83C4A491_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_796E49BC83C4A491_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_796E49BC83C4A491___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
