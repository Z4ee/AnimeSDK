#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_74B5CC70D7830EE0;
class Class_1_BCC22A53597699D4;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimMusicCueInfo; }
namespace RPG::GameCore { class FiveDimMusicDirectorConfig; }
namespace RPG::GameCore { class FiveDimMusicInfo; }

#define CLASS_1_BE63256C733AE484_FINALIZE_OFFSET UNITYSDK_OFFSET(0x180E2C80)
#define CLASS_1_BE63256C733AE484_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x180E2880)
#define CLASS_1_BE63256C733AE484_METHOD_1_3330E5ACE95F172D_OFFSET UNITYSDK_OFFSET(0x180E2D10)
#define CLASS_1_BE63256C733AE484_METHOD_1_628532B0C4CB89C7_OFFSET UNITYSDK_OFFSET(0x180E3300)
#define CLASS_1_BE63256C733AE484_METHOD_1_7EE2D0B9A34F875C_OFFSET UNITYSDK_OFFSET(0x180E3130)
#define CLASS_1_BE63256C733AE484_METHOD_1_A55FA1B2A00FD9CA_OFFSET UNITYSDK_OFFSET(0x180E31B0)
#define CLASS_1_BE63256C733AE484_METHOD_1_B57117F23D27B799_OFFSET UNITYSDK_OFFSET(0x180E3020)
#define CLASS_1_BE63256C733AE484_METHOD_1_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x180E29C0)
#define CLASS_1_BE63256C733AE484_METHOD_1_DE714BAAB80F86AC_OFFSET UNITYSDK_OFFSET(0x180E2E70)
#define CLASS_1_BE63256C733AE484_METHOD_1_F3B14DDBFB5CA9FD_OFFSET UNITYSDK_OFFSET(0x180E28F0)
#define CLASS_1_BE63256C733AE484_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x180E2890)
#define CLASS_1_BE63256C733AE484__CTOR_OFFSET UNITYSDK_OFFSET(0x180E28A0)

inline static constexpr unsigned int Class_1_BE63256C733AE484_TypeDefinitionIndex = 41037;

class Class_1_BE63256C733AE484 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_BCC22A53597699D4*>* Field_1_0; // 0x10
	::RPG::PoolList_1<::Class_1_74B5CC70D7830EE0*>* Field_1_1; // 0x18
	::System::Single _Length_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_Length()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_GET_LENGTH_OFFSET))(this);
	}

	::System::Void set_Length(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_SET_LENGTH_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_FINALIZE_OFFSET))(this);
	}

	::Class_1_BCC22A53597699D4* Method_1_3330E5ACE95F172D(::System::Double a1, ::System::Double a2)
	{
		return ((::Class_1_BCC22A53597699D4*(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_METHOD_1_3330E5ACE95F172D_OFFSET))(this, a1, a2);
	}

	::RPG::PoolList_1<::Class_1_74B5CC70D7830EE0*>* Method_1_DE714BAAB80F86AC(::System::Int32 a1, ::System::Single a2)
	{
		return ((::RPG::PoolList_1<::Class_1_74B5CC70D7830EE0*>*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_METHOD_1_DE714BAAB80F86AC_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B57117F23D27B799(::System::Int32 a1, ::System::Double a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_METHOD_1_B57117F23D27B799_OFFSET))(this, a1, a2);
	}

	::Class_1_74B5CC70D7830EE0* Method_1_7EE2D0B9A34F875C(::System::Int32 a1)
	{
		return ((::Class_1_74B5CC70D7830EE0*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_METHOD_1_7EE2D0B9A34F875C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3B14DDBFB5CA9FD(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_METHOD_1_F3B14DDBFB5CA9FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_A55FA1B2A00FD9CA(::RPG::GameCore::FiveDimMusicInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicInfo*))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_METHOD_1_A55FA1B2A00FD9CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_628532B0C4CB89C7(::RPG::GameCore::FiveDimMusicCueInfo* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicCueInfo*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_METHOD_1_628532B0C4CB89C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE63256C733AE484_METHOD_1_CB8E229BDF290D41_OFFSET))(this);
	}
};
