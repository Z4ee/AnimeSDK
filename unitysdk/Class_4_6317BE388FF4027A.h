#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

class Class_1_884860A2FAB24301;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_6317BE388FF4027A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFD97C00)
#define CLASS_4_6317BE388FF4027A_METHOD_4_2038CB603E452C23_OFFSET UNITYSDK_OFFSET(0xFD97E50)
#define CLASS_4_6317BE388FF4027A_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xFD97DC0)
#define CLASS_4_6317BE388FF4027A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFD97CD0)
#define CLASS_4_6317BE388FF4027A__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD97C50)
#define CLASS_4_6317BE388FF4027A__CTOR_OFFSET UNITYSDK_OFFSET(0xFD97D50)

inline static constexpr unsigned int Class_4_6317BE388FF4027A_TypeDefinitionIndex = 60978;

class Class_4_6317BE388FF4027A : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x21C; // 0x0
	::Class_1_884860A2FAB24301* Field_4_2; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_4_1; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_6317BE388FF4027A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6317BE388FF4027A__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6317BE388FF4027A_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6317BE388FF4027A_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6317BE388FF4027A_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_6317BE388FF4027A* Method_4_2038CB603E452C23()
	{
		return ((::Class_4_6317BE388FF4027A*(*)())((::PBYTE)hIl2Cpp + CLASS_4_6317BE388FF4027A_METHOD_4_2038CB603E452C23_OFFSET))();
	}
};
