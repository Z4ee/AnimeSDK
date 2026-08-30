#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/PropState.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class PropsReqInteractByColonyMirrorTakenDiff; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6E8D993C62A887EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1856B820)
#define CLASS_2_6E8D993C62A887EE_METHOD_2_019BE49D6AE7D0EA_OFFSET UNITYSDK_OFFSET(0x1856BE30)
#define CLASS_2_6E8D993C62A887EE_METHOD_2_142C872A468D65DC_OFFSET UNITYSDK_OFFSET(0x1856C3C0)
#define CLASS_2_6E8D993C62A887EE_METHOD_2_1B7062170F12239E_OFFSET UNITYSDK_OFFSET(0x1856C770)
#define CLASS_2_6E8D993C62A887EE_METHOD_2_7D3EF3C6B6273FCA_OFFSET UNITYSDK_OFFSET(0x1856C280)
#define CLASS_2_6E8D993C62A887EE_METHOD_2_99A5FB3E84B54B3D_OFFSET UNITYSDK_OFFSET(0x1856C800)
#define CLASS_2_6E8D993C62A887EE_METHOD_2_CC1F4B7E56F37345_OFFSET UNITYSDK_OFFSET(0x1856C710)
#define CLASS_2_6E8D993C62A887EE_METHOD_2_FDA1EA1E46601E2F_OFFSET UNITYSDK_OFFSET(0x1856BF60)
#define CLASS_2_6E8D993C62A887EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1856B8D0)
#define CLASS_2_6E8D993C62A887EE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1856BEB0)
#define CLASS_2_6E8D993C62A887EE_TICK_OFFSET UNITYSDK_OFFSET(0x1856BF00)
#define CLASS_2_6E8D993C62A887EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1856C8D0)
#define CLASS_2_6E8D993C62A887EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1856B7D0)

inline static constexpr unsigned int Class_2_6E8D993C62A887EE_TypeDefinitionIndex = 53443;

class Class_2_6E8D993C62A887EE : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropState, ::System::UInt32>** StaticGet_BFIPCKLFEPA()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropState, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6E8D993C62A887EE_TypeDefinitionIndex)->GetStaticField(0x5C730);
	}
	::RPG::GameCore::MazePuzzleOrigamiColonyRow* OPEGEBLMMII; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* IHPLGIBHEPE; // 0x20
	::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::MapPropDef*>* PKJBOFFIELG; // 0x38
	::System::UInt32 FMJAHJGAKNE; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDA1EA1E46601E2F(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_METHOD_2_FDA1EA1E46601E2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_019BE49D6AE7D0EA(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_METHOD_2_019BE49D6AE7D0EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_142C872A468D65DC(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_METHOD_2_142C872A468D65DC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7D3EF3C6B6273FCA(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_METHOD_2_7D3EF3C6B6273FCA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_CC1F4B7E56F37345(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_METHOD_2_CC1F4B7E56F37345_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1B7062170F12239E(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_METHOD_2_1B7062170F12239E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_99A5FB3E84B54B3D(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + CLASS_2_6E8D993C62A887EE_METHOD_2_99A5FB3E84B54B3D_OFFSET))(this, a1);
	}
};
