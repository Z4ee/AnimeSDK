#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_464_Class_3_363670394F299996;
class Class_1_7E7D14C278F37D72;
class Class_3_3681BF1EBD4A4770;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6122E0031D0ED42D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15735480)
#define CLASS_3_6122E0031D0ED42D_METHOD_3_324F0986D0FF118D_OFFSET UNITYSDK_OFFSET(0x15735BF0)
#define CLASS_3_6122E0031D0ED42D_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x157354D0)
#define CLASS_3_6122E0031D0ED42D_METHOD_3_AA07548C58678A43_OFFSET UNITYSDK_OFFSET(0x15735EA0)
#define CLASS_3_6122E0031D0ED42D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157355C0)
#define CLASS_3_6122E0031D0ED42D__CTOR_OFFSET UNITYSDK_OFFSET(0x15735410)

inline static constexpr unsigned int Class_3_6122E0031D0ED42D_TypeDefinitionIndex = 53250;

class Class_3_6122E0031D0ED42D : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3681BF1EBD4A4770*>
{
public:
	::Class_0_16E4307DCC419505_464_Class_3_363670394F299996* AHOGJICDENK; // 0x28
	::System::Boolean GNMAAGAIFPC; // 0x30
	::System::Int32 OHOGFBCFFFN; // 0x34
	::System::UInt32 DHEOFFACDEK; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3681BF1EBD4A4770* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3681BF1EBD4A4770*))((::PBYTE)hIl2Cpp + CLASS_3_6122E0031D0ED42D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6122E0031D0ED42D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6122E0031D0ED42D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_AA07548C58678A43(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6122E0031D0ED42D_METHOD_3_AA07548C58678A43_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_7E7D14C278F37D72* Method_3_324F0986D0FF118D()
	{
		return ((::Class_1_7E7D14C278F37D72*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6122E0031D0ED42D_METHOD_3_324F0986D0FF118D_OFFSET))(this);
	}

	::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6122E0031D0ED42D_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
	}
};
