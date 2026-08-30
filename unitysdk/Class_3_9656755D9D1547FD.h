#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class OpenTreasureChallenge; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_9656755D9D1547FD_METHOD_3_10382836015EA7BB_OFFSET UNITYSDK_OFFSET(0x16DC78C0)
#define CLASS_3_9656755D9D1547FD_METHOD_3_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x16DC71D0)
#define CLASS_3_9656755D9D1547FD_METHOD_3_9139D0BFB31B0909_OFFSET UNITYSDK_OFFSET(0x16DC7600)
#define CLASS_3_9656755D9D1547FD_METHOD_3_D2474AE546A660A0_OFFSET UNITYSDK_OFFSET(0x16DC7770)
#define CLASS_3_9656755D9D1547FD_METHOD_3_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x16DC6E10)
#define CLASS_3_9656755D9D1547FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DC6C80)
#define CLASS_3_9656755D9D1547FD__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC6C30)

inline static constexpr unsigned int Class_3_9656755D9D1547FD_TypeDefinitionIndex = 58392;

class Class_3_9656755D9D1547FD : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenTreasureChallenge*>
{
public:
	// static const ::System::String* LOGEDFAEHCF; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTreasureChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTreasureChallenge*))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_9139D0BFB31B0909(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_9139D0BFB31B0909_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_D2474AE546A660A0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_D2474AE546A660A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_10382836015EA7BB(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_10382836015EA7BB_OFFSET))(this, a1);
	}

	::System::Void Method_3_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_3_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_39FD7185C859CEAD_OFFSET))(this);
	}
};
