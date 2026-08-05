#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_9518B5776748B41E;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_4_8637C178AE75321B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x156C21D0)
#define CLASS_4_8637C178AE75321B_METHOD_4_68EA9CFF6FD66370_OFFSET UNITYSDK_OFFSET(0x156C2610)
#define CLASS_4_8637C178AE75321B_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x156C2580)
#define CLASS_4_8637C178AE75321B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x156C22A0)
#define CLASS_4_8637C178AE75321B__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C2220)
#define CLASS_4_8637C178AE75321B__CTOR_OFFSET UNITYSDK_OFFSET(0x156C23B0)

inline static constexpr unsigned int Class_4_8637C178AE75321B_TypeDefinitionIndex = 83772;

class Class_4_8637C178AE75321B : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_1 = 0x21A; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::UInt32>* Field_4_0; // 0x50
	::Class_1_9518B5776748B41E* Field_4_7; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* Field_4_6; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_8637C178AE75321B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8637C178AE75321B__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8637C178AE75321B_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8637C178AE75321B_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8637C178AE75321B_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_8637C178AE75321B* Method_4_68EA9CFF6FD66370()
	{
		return ((::Class_4_8637C178AE75321B*(*)())((::PBYTE)hIl2Cpp + CLASS_4_8637C178AE75321B_METHOD_4_68EA9CFF6FD66370_OFFSET))();
	}
};
