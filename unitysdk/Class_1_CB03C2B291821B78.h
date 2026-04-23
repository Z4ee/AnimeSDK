#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_670;
class Class_0_16E4307DCC419505_671;
class Class_0_16E4307DCC419505_672;
class Class_1_6AE08EF87FF0FFCC;
namespace RPG::AvatarSystem { class Avatar; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CB03C2B291821B78_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x12A749B0)
#define CLASS_1_CB03C2B291821B78_METHOD_1_1A7A5496048E15C2_OFFSET UNITYSDK_OFFSET(0x12A746B0)
#define CLASS_1_CB03C2B291821B78_METHOD_1_27C2887D49F6F6B3_OFFSET UNITYSDK_OFFSET(0x12A74160)
#define CLASS_1_CB03C2B291821B78_METHOD_1_6EACC4FF4EF827F8_OFFSET UNITYSDK_OFFSET(0x12A744F0)
#define CLASS_1_CB03C2B291821B78_METHOD_1_94ECEDA93C470D5F_OFFSET UNITYSDK_OFFSET(0x12A74A90)
#define CLASS_1_CB03C2B291821B78_METHOD_1_9E992ACDF90158E8_OFFSET UNITYSDK_OFFSET(0x12A745C0)
#define CLASS_1_CB03C2B291821B78__CTOR_OFFSET UNITYSDK_OFFSET(0x12A75A30)

inline static constexpr unsigned int Class_1_CB03C2B291821B78_TypeDefinitionIndex = 57741;

class Class_1_CB03C2B291821B78 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_670*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_670*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_672*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_671*>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_27C2887D49F6F6B3(::Class_0_16E4307DCC419505_670* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_670*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_27C2887D49F6F6B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EACC4FF4EF827F8(::Class_0_16E4307DCC419505_672* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_672*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_6EACC4FF4EF827F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E992ACDF90158E8(::Class_0_16E4307DCC419505_671* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_671*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_9E992ACDF90158E8_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Avatar* Method_1_1A7A5496048E15C2(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_1A7A5496048E15C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_670*>* Method_1_94ECEDA93C470D5F(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_670*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_670*>*(*)(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_670*>*))((::PBYTE)hIl2Cpp + CLASS_1_CB03C2B291821B78_METHOD_1_94ECEDA93C470D5F_OFFSET))(a1);
	}
};
