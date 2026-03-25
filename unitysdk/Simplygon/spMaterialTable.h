#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spTable.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spMaterial; }

#define SIMPLYGON_SPMATERIALTABLE_ADDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18370D10)
#define SIMPLYGON_SPMATERIALTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x183708F0)
#define SIMPLYGON_SPMATERIALTABLE_COPY_OFFSET UNITYSDK_OFFSET(0x18370AE0)
#define SIMPLYGON_SPMATERIALTABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183705E0)
#define SIMPLYGON_SPMATERIALTABLE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1836C8C0)
#define SIMPLYGON_SPMATERIALTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1835F240)

namespace Simplygon
{
	inline static constexpr unsigned int spMaterialTable_TypeDefinitionIndex = 29553;

	class spMaterialTable : public ::Simplygon::spTable
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALTABLE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::spMaterialTable* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::spMaterialTable*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALTABLE_GETCPTR_OFFSET))(obj);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALTABLE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALTABLE_CLEAR_OFFSET))(this);
		}

		::System::Void Copy(::Simplygon::spTable* src)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spTable*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALTABLE_COPY_OFFSET))(this, src);
		}

		::System::Int32 AddMaterial(::Simplygon::spMaterial* material)
		{
			return ((::System::Int32(*)(::PVOID, ::Simplygon::spMaterial*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIALTABLE_ADDMATERIAL_OFFSET))(this, material);
		}
	};
}
