#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

#define CLASS_4_34783E6FF88E6D2D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xECE0620)
#define CLASS_4_34783E6FF88E6D2D_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0xECE07B0)
#define CLASS_4_34783E6FF88E6D2D_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xECE0830)
#define CLASS_4_34783E6FF88E6D2D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xECE06F0)
#define CLASS_4_34783E6FF88E6D2D__CCTOR_OFFSET UNITYSDK_OFFSET(0xECE0670)
#define CLASS_4_34783E6FF88E6D2D__CTOR_OFFSET UNITYSDK_OFFSET(0xECE07A0)

inline static constexpr unsigned int Class_4_34783E6FF88E6D2D_TypeDefinitionIndex = 72323;

class Class_4_34783E6FF88E6D2D : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x225; // 0x0
	::MoleMole::HollowChessboard::RenderDataHandle Field_4_1; // 0x50
	::MoleMole::HollowChessboard::HollowChessboardUID Field_4_2; // 0x60
	::System::Boolean Field_4_3; // 0x68

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

	static ::Class_4_34783E6FF88E6D2D* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_34783E6FF88E6D2D*(*)())((::PBYTE)hIl2Cpp + CLASS_4_34783E6FF88E6D2D_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_34783E6FF88E6D2D_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
