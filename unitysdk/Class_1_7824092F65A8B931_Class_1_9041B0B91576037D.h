#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3D3D5AB52AC6095A;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7824092F65A8B931_CLASS_1_9041B0B91576037D_METHOD_1_ECB724E5866E385C_OFFSET UNITYSDK_OFFSET(0x12A137C0)
#define CLASS_1_7824092F65A8B931_CLASS_1_9041B0B91576037D__CTOR_OFFSET UNITYSDK_OFFSET(0x12A137B0)

inline static constexpr unsigned int Class_1_7824092F65A8B931_Class_1_9041B0B91576037D_TypeDefinitionIndex = 62108;

class Class_1_7824092F65A8B931_Class_1_9041B0B91576037D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_3D3D5AB52AC6095A*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_3_3D3D5AB52AC6095A*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7824092F65A8B931_CLASS_1_9041B0B91576037D__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_3_3D3D5AB52AC6095A*>* Method_1_ECB724E5866E385C()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_3D3D5AB52AC6095A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7824092F65A8B931_CLASS_1_9041B0B91576037D_METHOD_1_ECB724E5866E385C_OFFSET))(this);
	}
};
