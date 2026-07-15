#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_221056A254755276;
class Class_1_D49F49D6731D88EE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6838003491506F6E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172F1C00)
#define CLASS_1_6838003491506F6E_METHOD_1_03DD00261428CC96_OFFSET UNITYSDK_OFFSET(0x172F2400)
#define CLASS_1_6838003491506F6E_METHOD_1_08A8B99F9AA9DE72_OFFSET UNITYSDK_OFFSET(0x172F2050)
#define CLASS_1_6838003491506F6E_METHOD_1_2A5A794B771A4E70_OFFSET UNITYSDK_OFFSET(0x172F1F00)
#define CLASS_1_6838003491506F6E_METHOD_1_2C0A3068BEC5455E_OFFSET UNITYSDK_OFFSET(0x172F23B0)
#define CLASS_1_6838003491506F6E_METHOD_1_3BD66292DE3BEB83_OFFSET UNITYSDK_OFFSET(0x172F2320)
#define CLASS_1_6838003491506F6E_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x172F32E0)
#define CLASS_1_6838003491506F6E_METHOD_1_57043D1AC87BFD03_OFFSET UNITYSDK_OFFSET(0x172F2FE0)
#define CLASS_1_6838003491506F6E_METHOD_1_620A7E81411CFDFB_OFFSET UNITYSDK_OFFSET(0x172F1C90)
#define CLASS_1_6838003491506F6E__CTOR_OFFSET UNITYSDK_OFFSET(0x172F1AC0)

inline static constexpr unsigned int Class_1_6838003491506F6E_TypeDefinitionIndex = 49734;

class Class_1_6838003491506F6E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_221056A254755276*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt64>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_620A7E81411CFDFB(::System::UInt64 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E_METHOD_1_620A7E81411CFDFB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08A8B99F9AA9DE72(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E_METHOD_1_08A8B99F9AA9DE72_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BD66292DE3BEB83(::UnityEngine::Vector3 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E_METHOD_1_3BD66292DE3BEB83_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt64 Method_1_2A5A794B771A4E70(::UnityEngine::Vector3 a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E_METHOD_1_2A5A794B771A4E70_OFFSET))(this, a1);
	}

	static ::System::UInt64 Method_1_2C0A3068BEC5455E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::UInt64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E_METHOD_1_2C0A3068BEC5455E_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_D49F49D6731D88EE*>* Method_1_03DD00261428CC96(::UnityEngine::Vector3 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D49F49D6731D88EE*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E_METHOD_1_03DD00261428CC96_OFFSET))(this, a1);
	}

	::System::Void Method_1_57043D1AC87BFD03(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E_METHOD_1_57043D1AC87BFD03_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
