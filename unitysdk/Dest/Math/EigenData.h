#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_EIGENDATA_GETEIGENVALUE_OFFSET UNITYSDK_OFFSET(0x1BB47300)
#define DEST_MATH_EIGENDATA_GETEIGENVECTOR2_OFFSET UNITYSDK_OFFSET(0x1BB47340)
#define DEST_MATH_EIGENDATA_GETEIGENVECTOR3_OFFSET UNITYSDK_OFFSET(0x1BB486D0)
#define DEST_MATH_EIGENDATA_GETEIGENVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB4ABC0)
#define DEST_MATH_EIGENDATA_GETEIGENVECTOR_OFFSET UNITYSDK_OFFSET(0x1BB4AAD0)
#define DEST_MATH_EIGENDATA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1BB4AA90)
#define DEST_MATH_EIGENDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB4AAA0)

namespace Dest::Math
{
	inline static constexpr unsigned int EigenData_TypeDefinitionIndex = 33188;

	class EigenData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _diagonal; // 0x10
		::Il2CppArray<::System::Single>* _matrix; // 0x18
		::System::Int32 _size; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* matrix)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA__CTOR_OFFSET))(this, diagonal, matrix);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GET_SIZE_OFFSET))(this);
		}

		::System::Single GetEigenvalue(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVALUE_OFFSET))(this, index);
		}

		::UnityEngine::Vector2 GetEigenvector2(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVECTOR2_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetEigenvector3(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVECTOR3_OFFSET))(this, index);
		}

		::Il2CppArray<::System::Single>* GetEigenvector(::System::Int32 index)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVECTOR_OFFSET))(this, index);
		}

		::System::Void GetEigenvector_1(::System::Int32 index, ::Il2CppArray<::System::Single>* out_eigenvector)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVECTOR_1_OFFSET))(this, index, out_eigenvector);
		}
	};
}
