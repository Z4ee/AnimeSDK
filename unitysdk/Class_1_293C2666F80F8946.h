#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BDD3B170E0BCA03E;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_293C2666F80F8946_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AB6C40)
#define CLASS_1_293C2666F80F8946_METHOD_1_02F9423C5327997B_OFFSET UNITYSDK_OFFSET(0x12AB6170)
#define CLASS_1_293C2666F80F8946_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x12AB6310)
#define CLASS_1_293C2666F80F8946_METHOD_1_3153D82DE4567702_OFFSET UNITYSDK_OFFSET(0x12AB6480)
#define CLASS_1_293C2666F80F8946_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12AB6420)
#define CLASS_1_293C2666F80F8946_METHOD_1_582E9EA2229B8034_OFFSET UNITYSDK_OFFSET(0x12AB6D00)
#define CLASS_1_293C2666F80F8946_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x12AB6980)
#define CLASS_1_293C2666F80F8946_METHOD_1_957119ADEEA0A017_OFFSET UNITYSDK_OFFSET(0x12AB6A40)
#define CLASS_1_293C2666F80F8946_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x12AB6550)
#define CLASS_1_293C2666F80F8946_METHOD_1_CE944E12A64032F6_OFFSET UNITYSDK_OFFSET(0x12AB6DF0)
#define CLASS_1_293C2666F80F8946__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB6160)

inline static constexpr unsigned int Class_1_293C2666F80F8946_TypeDefinitionIndex = 70161;

class Class_1_293C2666F80F8946 : public ::System::Object
{
public:
	::Class_1_BDD3B170E0BCA03E* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor(::System::Boolean a1, ::Class_1_BDD3B170E0BCA03E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_BDD3B170E0BCA03E*))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_02F9423C5327997B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_02F9423C5327997B_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_3153D82DE4567702(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_3153D82DE4567702_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_582E9EA2229B8034(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_582E9EA2229B8034_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE944E12A64032F6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_CE944E12A64032F6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>* Method_1_957119ADEEA0A017()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_957119ADEEA0A017_OFFSET))(this);
	}
};
