#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_872688EC7B2354A4;
class Class_1_BCC22A53597699D4;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimMusicCueInfo; }
namespace RPG::GameCore { class FiveDimMusicDirectorConfig; }
namespace RPG::GameCore { class FiveDimMusicInfo; }

#define CLASS_1_2A5AE5E3C530776E_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18C1A770)
#define CLASS_1_2A5AE5E3C530776E_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18C1A320)
#define CLASS_1_2A5AE5E3C530776E_METHOD_1_0543F42479BC625E_OFFSET UNITYSDK_OFFSET(0x18C1AD10)
#define CLASS_1_2A5AE5E3C530776E_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x18C1A480)
#define CLASS_1_2A5AE5E3C530776E_METHOD_1_7EE2D0B9A34F875C_OFFSET UNITYSDK_OFFSET(0x18C1AC90)
#define CLASS_1_2A5AE5E3C530776E_METHOD_1_87D1B2343E73B6A4_OFFSET UNITYSDK_OFFSET(0x18C1A820)
#define CLASS_1_2A5AE5E3C530776E_METHOD_1_A529D0A34EB6E185_OFFSET UNITYSDK_OFFSET(0x18C1AE90)
#define CLASS_1_2A5AE5E3C530776E_METHOD_1_B57117F23D27B799_OFFSET UNITYSDK_OFFSET(0x18C1AB80)
#define CLASS_1_2A5AE5E3C530776E_METHOD_1_DE714BAAB80F86AC_OFFSET UNITYSDK_OFFSET(0x18C1A9B0)
#define CLASS_1_2A5AE5E3C530776E_METHOD_1_F3B14DDBFB5CA9FD_OFFSET UNITYSDK_OFFSET(0x18C1A3B0)
#define CLASS_1_2A5AE5E3C530776E_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18C1A330)
#define CLASS_1_2A5AE5E3C530776E__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1A340)

inline static constexpr unsigned int Class_1_2A5AE5E3C530776E_TypeDefinitionIndex = 40222;

class Class_1_2A5AE5E3C530776E : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_BCC22A53597699D4*>* Field_1_0; // 0x10
	::RPG::PoolList_1<::Class_1_872688EC7B2354A4*>* Field_1_1; // 0x18
	::System::Single _Length_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_Length()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_GET_LENGTH_OFFSET))(this);
	}

	::System::Void set_Length(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_SET_LENGTH_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_FINALIZE_OFFSET))(this);
	}

	::Class_1_BCC22A53597699D4* Method_1_87D1B2343E73B6A4(::System::Double a1, ::System::Double a2)
	{
		return ((::Class_1_BCC22A53597699D4*(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_METHOD_1_87D1B2343E73B6A4_OFFSET))(this, a1, a2);
	}

	::RPG::PoolList_1<::Class_1_872688EC7B2354A4*>* Method_1_DE714BAAB80F86AC(::System::Int32 a1, ::System::Single a2)
	{
		return ((::RPG::PoolList_1<::Class_1_872688EC7B2354A4*>*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_METHOD_1_DE714BAAB80F86AC_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B57117F23D27B799(::System::Int32 a1, ::System::Double a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_METHOD_1_B57117F23D27B799_OFFSET))(this, a1, a2);
	}

	::Class_1_872688EC7B2354A4* Method_1_7EE2D0B9A34F875C(::System::Int32 a1)
	{
		return ((::Class_1_872688EC7B2354A4*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_METHOD_1_7EE2D0B9A34F875C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3B14DDBFB5CA9FD(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_METHOD_1_F3B14DDBFB5CA9FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_0543F42479BC625E(::RPG::GameCore::FiveDimMusicInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_METHOD_1_0543F42479BC625E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A529D0A34EB6E185(::RPG::GameCore::FiveDimMusicCueInfo* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicCueInfo*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_METHOD_1_A529D0A34EB6E185_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A5AE5E3C530776E_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}
};
