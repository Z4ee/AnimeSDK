#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_74B5CC70D7830EE0;
class Class_1_BCC22A53597699D4;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimMusicCueInfo; }
namespace RPG::GameCore { class FiveDimMusicDirectorConfig; }
namespace RPG::GameCore { class FiveDimMusicInfo; }

#define CLASS_1_8AE73F462C66560E_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1678B8E0)
#define CLASS_1_8AE73F462C66560E_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1678B510)
#define CLASS_1_8AE73F462C66560E_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1678B660)
#define CLASS_1_8AE73F462C66560E_METHOD_1_264E97A7B917FDEA_OFFSET UNITYSDK_OFFSET(0x1678BB50)
#define CLASS_1_8AE73F462C66560E_METHOD_1_50CB8BF556159225_OFFSET UNITYSDK_OFFSET(0x1678BDB0)
#define CLASS_1_8AE73F462C66560E_METHOD_1_57B525CF920F48FF_OFFSET UNITYSDK_OFFSET(0x1678BE40)
#define CLASS_1_8AE73F462C66560E_METHOD_1_83ED4D2B76D0FF77_OFFSET UNITYSDK_OFFSET(0x1678BF80)
#define CLASS_1_8AE73F462C66560E_METHOD_1_A19BA3F39EF084D4_OFFSET UNITYSDK_OFFSET(0x1678B970)
#define CLASS_1_8AE73F462C66560E_METHOD_1_BAA84EF6E318BB50_OFFSET UNITYSDK_OFFSET(0x1678BCA0)
#define CLASS_1_8AE73F462C66560E_METHOD_1_F3B14DDBFB5CA9FD_OFFSET UNITYSDK_OFFSET(0x1678B580)
#define CLASS_1_8AE73F462C66560E_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1678B520)
#define CLASS_1_8AE73F462C66560E__CTOR_OFFSET UNITYSDK_OFFSET(0x1678B530)

inline static constexpr unsigned int Class_1_8AE73F462C66560E_TypeDefinitionIndex = 33650;

class Class_1_8AE73F462C66560E : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_74B5CC70D7830EE0*>* Field_1_0; // 0x10
	::RPG::PoolList_1<::Class_1_BCC22A53597699D4*>* Field_1_1; // 0x18
	::System::Single _Length_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_Length()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_GET_LENGTH_OFFSET))(this);
	}

	::System::Void set_Length(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_SET_LENGTH_OFFSET))(this, value);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_FINALIZE_OFFSET))(this);
	}

	::Class_1_BCC22A53597699D4* Method_1_A19BA3F39EF084D4(::System::Double a1, ::System::Double a2)
	{
		return ((::Class_1_BCC22A53597699D4*(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_METHOD_1_A19BA3F39EF084D4_OFFSET))(this, a1, a2);
	}

	::RPG::PoolList_1<::Class_1_74B5CC70D7830EE0*>* Method_1_264E97A7B917FDEA(::System::Int32 a1, ::System::Single a2)
	{
		return ((::RPG::PoolList_1<::Class_1_74B5CC70D7830EE0*>*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_METHOD_1_264E97A7B917FDEA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_BAA84EF6E318BB50(::System::Int32 a1, ::System::Double a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_METHOD_1_BAA84EF6E318BB50_OFFSET))(this, a1, a2);
	}

	::Class_1_74B5CC70D7830EE0* Method_1_50CB8BF556159225(::System::Int32 a1)
	{
		return ((::Class_1_74B5CC70D7830EE0*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_METHOD_1_50CB8BF556159225_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3B14DDBFB5CA9FD(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_METHOD_1_F3B14DDBFB5CA9FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_57B525CF920F48FF(::RPG::GameCore::FiveDimMusicInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_METHOD_1_57B525CF920F48FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_83ED4D2B76D0FF77(::RPG::GameCore::FiveDimMusicCueInfo* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicCueInfo*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_METHOD_1_83ED4D2B76D0FF77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE73F462C66560E_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}
};
