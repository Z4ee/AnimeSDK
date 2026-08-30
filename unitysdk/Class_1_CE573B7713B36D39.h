#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CE573B7713B36D39_TrackPlayingState.h"
#include "unitysdk/System/Object.h"

class Class_1_2A5AE5E3C530776E;
class Class_1_BCC22A53597699D4;

#define CLASS_1_CE573B7713B36D39_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C519D80)
#define CLASS_1_CE573B7713B36D39_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C519E00)
#define CLASS_1_CE573B7713B36D39__CTOR_OFFSET UNITYSDK_OFFSET(0x1C519E50)

inline static constexpr unsigned int Class_1_CE573B7713B36D39_TypeDefinitionIndex = 41758;

class Class_1_CE573B7713B36D39 : public ::System::Object
{
public:
	::Class_1_2A5AE5E3C530776E* CIBMFKKGFGN; // 0x10
	::Class_1_BCC22A53597699D4* PFLDGLBGPDC; // 0x18
	::Class_1_CE573B7713B36D39_TrackPlayingState ONLDOAJIGMI; // 0x20
	::System::Int32 JBIFBLMDAMG; // 0x24
	::System::Int32 LAINCNBEMPF; // 0x28
	::System::Int32 DOACJFLCILA; // 0x2C
	::System::Double GAFENHHEBPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE573B7713B36D39__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE573B7713B36D39_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE573B7713B36D39_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
