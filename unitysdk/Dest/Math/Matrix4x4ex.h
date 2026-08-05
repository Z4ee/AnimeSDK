#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Plane3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define DEST_MATH_MATRIX4X4EX_CALCDETERMINANT_OFFSET UNITYSDK_OFFSET(0x1F2AC9B0)
#define DEST_MATH_MATRIX4X4EX_COPYMATRIX_OFFSET UNITYSDK_OFFSET(0x1F2AD560)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONANGLEAXIS_OFFSET UNITYSDK_OFFSET(0x1F2AC150)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONANGLEUNITAXIS_OFFSET UNITYSDK_OFFSET(0x1F2AC310)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONEULER_1_OFFSET UNITYSDK_OFFSET(0x1F2ABB80)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONEULER_2_OFFSET UNITYSDK_OFFSET(0x1F2ABD90)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONEULER_OFFSET UNITYSDK_OFFSET(0x1F2AB970)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONFROMCOLUMNS_1_OFFSET UNITYSDK_OFFSET(0x1F2B00F0)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONFROMCOLUMNS_OFFSET UNITYSDK_OFFSET(0x1F2B0020)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONX_OFFSET UNITYSDK_OFFSET(0x1F2ABFA0)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONY_OFFSET UNITYSDK_OFFSET(0x1F2AC030)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATIONZ_OFFSET UNITYSDK_OFFSET(0x1F2AC0C0)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATION_1_OFFSET UNITYSDK_OFFSET(0x1F2AC6C0)
#define DEST_MATH_MATRIX4X4EX_CREATEROTATION_OFFSET UNITYSDK_OFFSET(0x1F2AC460)
#define DEST_MATH_MATRIX4X4EX_CREATERT_1_OFFSET UNITYSDK_OFFSET(0x1F2AF930)
#define DEST_MATH_MATRIX4X4EX_CREATERT_2_OFFSET UNITYSDK_OFFSET(0x1F2AFAF0)
#define DEST_MATH_MATRIX4X4EX_CREATERT_3_OFFSET UNITYSDK_OFFSET(0x1F2AFD60)
#define DEST_MATH_MATRIX4X4EX_CREATERT_OFFSET UNITYSDK_OFFSET(0x1F2AF760)
#define DEST_MATH_MATRIX4X4EX_CREATESCALE_1_OFFSET UNITYSDK_OFFSET(0x1F2AB900)
#define DEST_MATH_MATRIX4X4EX_CREATESCALE_2_OFFSET UNITYSDK_OFFSET(0x1F2AB940)
#define DEST_MATH_MATRIX4X4EX_CREATESCALE_OFFSET UNITYSDK_OFFSET(0x1F2AB8C0)
#define DEST_MATH_MATRIX4X4EX_CREATESHADOWDIRECTIONAL_1_OFFSET UNITYSDK_OFFSET(0x1F2B0300)
#define DEST_MATH_MATRIX4X4EX_CREATESHADOWDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0x1F2B01C0)
#define DEST_MATH_MATRIX4X4EX_CREATESHADOWPOINT_1_OFFSET UNITYSDK_OFFSET(0x1F2B0580)
#define DEST_MATH_MATRIX4X4EX_CREATESHADOWPOINT_OFFSET UNITYSDK_OFFSET(0x1F2B0430)
#define DEST_MATH_MATRIX4X4EX_CREATESHADOW_1_OFFSET UNITYSDK_OFFSET(0x1F2B0850)
#define DEST_MATH_MATRIX4X4EX_CREATESHADOW_OFFSET UNITYSDK_OFFSET(0x1F2B06C0)
#define DEST_MATH_MATRIX4X4EX_CREATESRT_1_OFFSET UNITYSDK_OFFSET(0x1F2AE480)
#define DEST_MATH_MATRIX4X4EX_CREATESRT_2_OFFSET UNITYSDK_OFFSET(0x1F2AE6D0)
#define DEST_MATH_MATRIX4X4EX_CREATESRT_3_OFFSET UNITYSDK_OFFSET(0x1F2AE900)
#define DEST_MATH_MATRIX4X4EX_CREATESRT_4_OFFSET UNITYSDK_OFFSET(0x1F2AEB30)
#define DEST_MATH_MATRIX4X4EX_CREATESRT_5_OFFSET UNITYSDK_OFFSET(0x1F2AEE60)
#define DEST_MATH_MATRIX4X4EX_CREATESRT_6_OFFSET UNITYSDK_OFFSET(0x1F2AF150)
#define DEST_MATH_MATRIX4X4EX_CREATESRT_7_OFFSET UNITYSDK_OFFSET(0x1F2AF490)
#define DEST_MATH_MATRIX4X4EX_CREATESRT_OFFSET UNITYSDK_OFFSET(0x1F2AE220)
#define DEST_MATH_MATRIX4X4EX_CREATEST_1_OFFSET UNITYSDK_OFFSET(0x1F2AFFC0)
#define DEST_MATH_MATRIX4X4EX_CREATEST_OFFSET UNITYSDK_OFFSET(0x1F2AFF60)
#define DEST_MATH_MATRIX4X4EX_CREATETRANSLATION_1_OFFSET UNITYSDK_OFFSET(0x1F2AB880)
#define DEST_MATH_MATRIX4X4EX_CREATETRANSLATION_OFFSET UNITYSDK_OFFSET(0x1F2AB830)
#define DEST_MATH_MATRIX4X4EX_INVERSE_1_OFFSET UNITYSDK_OFFSET(0x1F2ACFA0)
#define DEST_MATH_MATRIX4X4EX_INVERSE_OFFSET UNITYSDK_OFFSET(0x1F2ACB20)
#define DEST_MATH_MATRIX4X4EX_MULTIPLYLEFT_OFFSET UNITYSDK_OFFSET(0x1F2ADDB0)
#define DEST_MATH_MATRIX4X4EX_MULTIPLYRIGHT_OFFSET UNITYSDK_OFFSET(0x1F2ADB00)
#define DEST_MATH_MATRIX4X4EX_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1F2AE060)
#define DEST_MATH_MATRIX4X4EX_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1F2AE090)
#define DEST_MATH_MATRIX4X4EX_MULTIPLY_3_OFFSET UNITYSDK_OFFSET(0x1F2AE140)
#define DEST_MATH_MATRIX4X4EX_MULTIPLY_4_OFFSET UNITYSDK_OFFSET(0x1F2AE1B0)
#define DEST_MATH_MATRIX4X4EX_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1F2AD5D0)
#define DEST_MATH_MATRIX4X4EX_QUATERNIONTOROTATIONMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1F2AB6F0)
#define DEST_MATH_MATRIX4X4EX_QUATERNIONTOROTATIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1F2AB5B0)
#define DEST_MATH_MATRIX4X4EX_ROTATIONMATRIXTOQUATERNION_OFFSET UNITYSDK_OFFSET(0x1F2AB520)
#define DEST_MATH_MATRIX4X4EX_TRANSPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F2AC910)
#define DEST_MATH_MATRIX4X4EX_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1F2AC890)
#define DEST_MATH_MATRIX4X4EX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2B0990)

namespace Dest::Math
{
	inline static constexpr unsigned int Matrix4x4ex_TypeDefinitionIndex = 35399;

	class Matrix4x4ex : public ::System::Object
	{
	public:
		static ::UnityEngine::Matrix4x4* StaticGet_Identity()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4ex_TypeDefinitionIndex)->GetStaticField(0x8630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX__CCTOR_OFFSET))();
		}

		static ::System::Void RotationMatrixToQuaternion(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Quaternion& quaternion)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_ROTATIONMATRIXTOQUATERNION_OFFSET))(matrix, quaternion);
		}

		static ::System::Void QuaternionToRotationMatrix(::UnityEngine::Quaternion quaternion, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_QUATERNIONTOROTATIONMATRIX_OFFSET))(quaternion, matrix);
		}

		static ::System::Void QuaternionToRotationMatrix_1(::UnityEngine::Quaternion& quaternion, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_QUATERNIONTOROTATIONMATRIX_1_OFFSET))(quaternion, matrix);
		}

		static ::System::Void CreateTranslation(::UnityEngine::Vector3 position, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATETRANSLATION_OFFSET))(position, matrix);
		}

		static ::System::Void CreateTranslation_1(::UnityEngine::Vector3& position, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATETRANSLATION_1_OFFSET))(position, matrix);
		}

		static ::System::Void CreateScale(::UnityEngine::Vector3 scale, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESCALE_OFFSET))(scale, matrix);
		}

		static ::System::Void CreateScale_1(::UnityEngine::Vector3& scale, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESCALE_1_OFFSET))(scale, matrix);
		}

		static ::System::Void CreateScale_2(::System::Single scale, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESCALE_2_OFFSET))(scale, matrix);
		}

		static ::System::Void CreateRotationEuler(::System::Single eulerX, ::System::Single eulerY, ::System::Single eulerZ, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONEULER_OFFSET))(eulerX, eulerY, eulerZ, matrix);
		}

		static ::System::Void CreateRotationEuler_1(::UnityEngine::Vector3 eulerAngles, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONEULER_1_OFFSET))(eulerAngles, matrix);
		}

		static ::System::Void CreateRotationEuler_2(::UnityEngine::Vector3& eulerAngles, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONEULER_2_OFFSET))(eulerAngles, matrix);
		}

		static ::System::Void CreateRotationX(::System::Single angleInDegrees, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONX_OFFSET))(angleInDegrees, matrix);
		}

		static ::System::Void CreateRotationY(::System::Single angleInDegrees, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONY_OFFSET))(angleInDegrees, matrix);
		}

		static ::System::Void CreateRotationZ(::System::Single angleInDegrees, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONZ_OFFSET))(angleInDegrees, matrix);
		}

		static ::System::Void CreateRotationAngleAxis(::System::Single angleInDegrees, ::UnityEngine::Vector3 rotationAxis, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONANGLEAXIS_OFFSET))(angleInDegrees, rotationAxis, matrix);
		}

		static ::System::Void CreateRotationAngleUnitAxis(::System::Single angleInDegrees, ::UnityEngine::Vector3 normalizedAxis, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONANGLEUNITAXIS_OFFSET))(angleInDegrees, normalizedAxis, matrix);
		}

		static ::System::Void CreateRotation(::UnityEngine::Vector3 rotationOrigin, ::UnityEngine::Quaternion rotation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATION_OFFSET))(rotationOrigin, rotation, result);
		}

		static ::System::Void CreateRotation_1(::UnityEngine::Vector3& rotationOrigin, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATION_1_OFFSET))(rotationOrigin, rotation, result);
		}

		static ::System::Void Transpose(::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_TRANSPOSE_OFFSET))(matrix);
		}

		static ::System::Void Transpose_1(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Matrix4x4& transpose)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_TRANSPOSE_1_OFFSET))(matrix, transpose);
		}

		static ::System::Single CalcDeterminant(::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Single(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CALCDETERMINANT_OFFSET))(matrix);
		}

		static ::System::Void Inverse(::UnityEngine::Matrix4x4& matrix, ::System::Single epsilon)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_INVERSE_OFFSET))(matrix, epsilon);
		}

		static ::System::Void Inverse_1(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Matrix4x4& inverse, ::System::Single epsilon)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_INVERSE_1_OFFSET))(matrix, inverse, epsilon);
		}

		static ::System::Void CopyMatrix(::UnityEngine::Matrix4x4& source, ::UnityEngine::Matrix4x4& destination)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_COPYMATRIX_OFFSET))(source, destination);
		}

		static ::System::Void Multiply(::UnityEngine::Matrix4x4& matrix0, ::UnityEngine::Matrix4x4& matrix1, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_MULTIPLY_OFFSET))(matrix0, matrix1, result);
		}

		static ::System::Void MultiplyRight(::UnityEngine::Matrix4x4& matrix0, ::UnityEngine::Matrix4x4& matrix1)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_MULTIPLYRIGHT_OFFSET))(matrix0, matrix1);
		}

		static ::System::Void MultiplyLeft(::UnityEngine::Matrix4x4& matrix1, ::UnityEngine::Matrix4x4& matrix0)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_MULTIPLYLEFT_OFFSET))(matrix1, matrix0);
		}

		static ::System::Void Multiply_1(::UnityEngine::Matrix4x4& matrix, ::System::Single scalar)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_MULTIPLY_1_OFFSET))(matrix, scalar);
		}

		static ::System::Void Multiply_2(::UnityEngine::Matrix4x4& matrix, ::System::Single scalar, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_MULTIPLY_2_OFFSET))(matrix, scalar, result);
		}

		static ::UnityEngine::Vector4 Multiply_3(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Vector4 vector)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_MULTIPLY_3_OFFSET))(matrix, vector);
		}

		static ::UnityEngine::Vector4 Multiply_4(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Vector4& vector)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_MULTIPLY_4_OFFSET))(matrix, vector);
		}

		static ::System::Void CreateSRT(::UnityEngine::Vector3 scaling, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESRT_OFFSET))(scaling, rotation, translation, result);
		}

		static ::System::Void CreateSRT_1(::UnityEngine::Vector3& scaling, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESRT_1_OFFSET))(scaling, rotation, translation, result);
		}

		static ::System::Void CreateSRT_2(::System::Single scaling, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESRT_2_OFFSET))(scaling, rotation, translation, result);
		}

		static ::System::Void CreateSRT_3(::System::Single scaling, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESRT_3_OFFSET))(scaling, rotation, translation, result);
		}

		static ::System::Void CreateSRT_4(::UnityEngine::Vector3 scaling, ::UnityEngine::Vector3 rotationOrigin, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESRT_4_OFFSET))(scaling, rotationOrigin, rotation, translation, result);
		}

		static ::System::Void CreateSRT_5(::UnityEngine::Vector3& scaling, ::UnityEngine::Vector3& rotationOrigin, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESRT_5_OFFSET))(scaling, rotationOrigin, rotation, translation, result);
		}

		static ::System::Void CreateSRT_6(::System::Single scaling, ::UnityEngine::Vector3 rotationOrigin, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESRT_6_OFFSET))(scaling, rotationOrigin, rotation, translation, result);
		}

		static ::System::Void CreateSRT_7(::System::Single scaling, ::UnityEngine::Vector3& rotationOrigin, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESRT_7_OFFSET))(scaling, rotationOrigin, rotation, translation, result);
		}

		static ::System::Void CreateRT(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATERT_OFFSET))(rotation, translation, result);
		}

		static ::System::Void CreateRT_1(::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATERT_1_OFFSET))(rotation, translation, result);
		}

		static ::System::Void CreateRT_2(::UnityEngine::Vector3 rotationOrigin, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATERT_2_OFFSET))(rotationOrigin, rotation, translation, result);
		}

		static ::System::Void CreateRT_3(::UnityEngine::Vector3& rotationOrigin, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATERT_3_OFFSET))(rotationOrigin, rotation, translation, result);
		}

		static ::System::Void CreateST(::UnityEngine::Vector3 scaling, ::UnityEngine::Vector3 translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEST_OFFSET))(scaling, translation, result);
		}

		static ::System::Void CreateST_1(::UnityEngine::Vector3& scaling, ::UnityEngine::Vector3& translation, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEST_1_OFFSET))(scaling, translation, result);
		}

		static ::System::Void CreateRotationFromColumns(::UnityEngine::Vector3 column0, ::UnityEngine::Vector3 column1, ::UnityEngine::Vector3 column2, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONFROMCOLUMNS_OFFSET))(column0, column1, column2, matrix);
		}

		static ::System::Void CreateRotationFromColumns_1(::UnityEngine::Vector3& column0, ::UnityEngine::Vector3& column1, ::UnityEngine::Vector3& column2, ::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATEROTATIONFROMCOLUMNS_1_OFFSET))(column0, column1, column2, matrix);
		}

		static ::System::Void CreateShadowDirectional(::Dest::Math::Plane3 shadowPlane, ::UnityEngine::Vector3 dirLightOppositeDirection, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::Dest::Math::Plane3, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESHADOWDIRECTIONAL_OFFSET))(shadowPlane, dirLightOppositeDirection, result);
		}

		static ::System::Void CreateShadowDirectional_1(::Dest::Math::Plane3& shadowPlane, ::UnityEngine::Vector3& dirLightOppositeDirection, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::Dest::Math::Plane3&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESHADOWDIRECTIONAL_1_OFFSET))(shadowPlane, dirLightOppositeDirection, result);
		}

		static ::System::Void CreateShadowPoint(::Dest::Math::Plane3 shadowPlane, ::UnityEngine::Vector3 pointLightPosition, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::Dest::Math::Plane3, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESHADOWPOINT_OFFSET))(shadowPlane, pointLightPosition, result);
		}

		static ::System::Void CreateShadowPoint_1(::Dest::Math::Plane3& shadowPlane, ::UnityEngine::Vector3& pointLightPosition, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::Dest::Math::Plane3&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESHADOWPOINT_1_OFFSET))(shadowPlane, pointLightPosition, result);
		}

		static ::System::Void CreateShadow(::Dest::Math::Plane3 shadowPlane, ::UnityEngine::Vector4 lightData, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::Dest::Math::Plane3, ::UnityEngine::Vector4, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESHADOW_OFFSET))(shadowPlane, lightData, result);
		}

		static ::System::Void CreateShadow_1(::Dest::Math::Plane3& shadowPlane, ::UnityEngine::Vector4& lightData, ::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::Dest::Math::Plane3&, ::UnityEngine::Vector4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + DEST_MATH_MATRIX4X4EX_CREATESHADOW_1_OFFSET))(shadowPlane, lightData, result);
		}
	};
}
