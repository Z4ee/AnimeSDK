#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BDD3B170E0BCA03E;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_293C2666F80F8946_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B35280)
#define CLASS_1_293C2666F80F8946_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11B34B90)
#define CLASS_1_293C2666F80F8946_METHOD_1_4EB62E9E7E21F920_OFFSET UNITYSDK_OFFSET(0x11B34920)
#define CLASS_1_293C2666F80F8946_METHOD_1_7996ADC534AEE5D0_OFFSET UNITYSDK_OFFSET(0x11B350B0)
#define CLASS_1_293C2666F80F8946_METHOD_1_8A85BA198827D18E_OFFSET UNITYSDK_OFFSET(0x11B34BF0)
#define CLASS_1_293C2666F80F8946_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x11B34FF0)
#define CLASS_1_293C2666F80F8946_METHOD_1_A3B36CD562D22DD5_OFFSET UNITYSDK_OFFSET(0x11B34CA0)
#define CLASS_1_293C2666F80F8946_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11B34AB0)
#define CLASS_1_293C2666F80F8946_METHOD_1_CE944E12A64032F6_OFFSET UNITYSDK_OFFSET(0x11B353E0)
#define CLASS_1_293C2666F80F8946_METHOD_1_D7D514A57F13FD3D_OFFSET UNITYSDK_OFFSET(0x11B35320)
#define CLASS_1_293C2666F80F8946__CTOR_OFFSET UNITYSDK_OFFSET(0x11B34910)

inline static constexpr unsigned int Class_1_293C2666F80F8946_TypeDefinitionIndex = 69349;

class Class_1_293C2666F80F8946 : public ::System::Object
{
public:
	::Class_1_BDD3B170E0BCA03E* Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_0; // 0x1D

	::System::Void _ctor(::System::Boolean a1, ::Class_1_BDD3B170E0BCA03E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_BDD3B170E0BCA03E*))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4EB62E9E7E21F920(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_4EB62E9E7E21F920_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_8A85BA198827D18E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_8A85BA198827D18E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3B36CD562D22DD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_A3B36CD562D22DD5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D7D514A57F13FD3D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_D7D514A57F13FD3D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE944E12A64032F6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_CE944E12A64032F6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>* Method_1_7996ADC534AEE5D0()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946_METHOD_1_7996ADC534AEE5D0_OFFSET))(this);
	}
};
