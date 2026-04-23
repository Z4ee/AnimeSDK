#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class OpenTreasureChallenge; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_9656755D9D1547FD_METHOD_3_0E501FA8E202650B_OFFSET UNITYSDK_OFFSET(0x90A0360)
#define CLASS_3_9656755D9D1547FD_METHOD_3_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x909FD70)
#define CLASS_3_9656755D9D1547FD_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x909F9B0)
#define CLASS_3_9656755D9D1547FD_METHOD_3_5E15B076B033F0F1_OFFSET UNITYSDK_OFFSET(0x90A0160)
#define CLASS_3_9656755D9D1547FD_METHOD_3_73B858B9313ABDB8_OFFSET UNITYSDK_OFFSET(0x90A0270)
#define CLASS_3_9656755D9D1547FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x909F890)
#define CLASS_3_9656755D9D1547FD__CTOR_OFFSET UNITYSDK_OFFSET(0x909F840)
#define CLASS_3_9656755D9D1547FD___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x90A0460)

inline static constexpr unsigned int Class_3_9656755D9D1547FD_TypeDefinitionIndex = 53715;

class Class_3_9656755D9D1547FD : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenTreasureChallenge*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTreasureChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTreasureChallenge*))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_5E15B076B033F0F1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_5E15B076B033F0F1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_73B858B9313ABDB8(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_73B858B9313ABDB8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0E501FA8E202650B(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_0E501FA8E202650B_OFFSET))(this, a1);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_3_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD_METHOD_3_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9656755D9D1547FD___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
