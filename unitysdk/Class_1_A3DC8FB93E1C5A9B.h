#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHackInteractPointChildWindowController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_A3DC8FB93E1C5A9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193F2FB0)
#define CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x193F3830)
#define CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_744CCE6C62C9FA14_OFFSET UNITYSDK_OFFSET(0x193F3BC0)
#define CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x193F38E0)
#define CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_B85DC5C8D74700FF_OFFSET UNITYSDK_OFFSET(0x193F36A0)
#define CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_DBD5F3ABDA54905E_OFFSET UNITYSDK_OFFSET(0x193F3D40)
#define CLASS_1_A3DC8FB93E1C5A9B__CTOR_OFFSET UNITYSDK_OFFSET(0x193F35C0)

inline static constexpr unsigned int Class_1_A3DC8FB93E1C5A9B_TypeDefinitionIndex = 86390;

class Class_1_A3DC8FB93E1C5A9B : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::MoleMole::UIHackInteractPointChildWindowController*>* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIHackInteractPointChildWindowController*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3DC8FB93E1C5A9B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3DC8FB93E1C5A9B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B85DC5C8D74700FF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_B85DC5C8D74700FF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Void Method_1_744CCE6C62C9FA14(::System::UInt32 a1, ::MoleMole::UIHackInteractPointChildWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIHackInteractPointChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_744CCE6C62C9FA14_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIHackInteractPointChildWindowController* Method_1_DBD5F3ABDA54905E()
	{
		return ((::MoleMole::UIHackInteractPointChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3DC8FB93E1C5A9B_METHOD_1_DBD5F3ABDA54905E_OFFSET))(this);
	}
};
