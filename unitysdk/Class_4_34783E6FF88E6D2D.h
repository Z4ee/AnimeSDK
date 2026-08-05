#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

#define CLASS_4_34783E6FF88E6D2D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12B024E0)
#define CLASS_4_34783E6FF88E6D2D_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x12B02700)
#define CLASS_4_34783E6FF88E6D2D_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12B02670)
#define CLASS_4_34783E6FF88E6D2D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12B025B0)
#define CLASS_4_34783E6FF88E6D2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B02530)
#define CLASS_4_34783E6FF88E6D2D__CTOR_OFFSET UNITYSDK_OFFSET(0x12B02660)

inline static constexpr unsigned int Class_4_34783E6FF88E6D2D_TypeDefinitionIndex = 68695;

class Class_4_34783E6FF88E6D2D : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_1 = 0x225; // 0x0
	::MoleMole::HollowChessboard::RenderDataHandle Field_4_0; // 0x50
	::System::Boolean Field_4_6; // 0x60
	::MoleMole::HollowChessboard::HollowChessboardUID Field_4_7; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_34783E6FF88E6D2D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_34783E6FF88E6D2D__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_34783E6FF88E6D2D_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_34783E6FF88E6D2D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_34783E6FF88E6D2D_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_34783E6FF88E6D2D* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_34783E6FF88E6D2D*(*)())((::PBYTE)hIl2Cpp + CLASS_4_34783E6FF88E6D2D_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}
};
